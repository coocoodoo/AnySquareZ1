// Raw images have no entry point Ghidra trusts: disassemble the whole block first,
// create functions at every branch target, then export decompiled C.
// args: <outDir> [startAddr] [length]
import ghidra.app.script.GhidraScript;
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.mem.MemoryBlock;
import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;

public class ForceDisasm extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outDir = args[0];
        new File(outDir).mkdirs();
        String base = currentProgram.getName().replaceAll("[^A-Za-z0-9._-]", "_");

        MemoryBlock[] blocks = currentProgram.getMemory().getBlocks();
        for (MemoryBlock b : blocks) {
            if (!b.isInitialized()) continue;
            if (!b.isExecute()) {
                int tx = currentProgram.startTransaction("mark executable");
                b.setExecute(true);
                currentProgram.endTransaction(tx, true);
            }
            AddressSet set = new AddressSet(b.getStart(), b.getEnd());
            long size = b.getSize();
            long step = 0x10000L;   // 64 KB windows: one giant DisassembleCommand is refused
            int chunks = 0;
            for (long off = 0; off < size; off += step) {
                Address s = b.getStart().add(off);
                long end = Math.min(off + step, size) - 1;
                Address e = b.getStart().add(end);
                DisassembleCommand cmd = new DisassembleCommand(s, new AddressSet(s, e), true);
                cmd.applyTo(currentProgram, monitor);
                chunks++;
            }
            println("disassembled block " + b.getName() + " in " + chunks + " chunks, "
                    + "instructions=" + currentProgram.getListing().getNumInstructions()
                    + " " + b.getStart() + "-" + b.getEnd());
        }

        // create functions at all branch/call targets found by the forced disassembly
        int made = 0;
        FunctionManager fm = currentProgram.getFunctionManager();
        ghidra.program.model.listing.InstructionIterator it =
                currentProgram.getListing().getInstructions(true);
        java.util.HashSet<Address> targets = new java.util.HashSet<>();
        while (it.hasNext()) {
            ghidra.program.model.listing.Instruction ins = it.next();
            ghidra.program.model.symbol.Reference[] refs = ins.getReferencesFrom();
            for (ghidra.program.model.symbol.Reference r : refs) {
                if (r.getReferenceType().isCall() || r.getReferenceType().isJump()) {
                    targets.add(r.getToAddress());
                }
            }
        }
        for (Address a : targets) {
            if (fm.getFunctionAt(a) == null && currentProgram.getMemory().contains(a)) {
                try { if (createFunction(a, null) != null) made++; } catch (Exception e) { }
            }
        }
        println("functions created: " + made + ", total " + fm.getFunctionCount());

        DecompInterface di = new DecompInterface();
        di.toggleCCode(true);
        di.toggleSyntaxTree(false);
        di.setSimplificationStyle("decompile");
        if (!di.openProgram(currentProgram)) { println("decompiler open failed"); return; }

        PrintWriter all = new PrintWriter(new FileWriter(new File(outDir, base + ".c")));
        PrintWriter idx = new PrintWriter(new FileWriter(new File(outDir, "index.csv")));
        idx.println("name,address,size,lines,status");
        all.println("// " + base + " — raw image, forced disassembly + Ghidra 12.1.3 decompiler");
        int done = 0, failed = 0;
        for (Function f : fm.getFunctions(true)) {
            if (monitor.isCancelled()) break;
            String body, status = "ok";
            try {
                DecompileResults r = di.decompileFunction(f, 90, monitor);
                if (r != null && r.decompileCompleted() && r.getDecompiledFunction() != null) {
                    body = r.getDecompiledFunction().getC();
                } else { body = "/* failed */"; status = "failed"; failed++; }
            } catch (Exception e) { body = "/* exception */"; status = "error"; failed++; }
            all.println("/* ===== " + f.getName() + " @ " + f.getEntryPoint() + " size=" + f.getBody().getNumAddresses() + " ===== */");
            all.print(body);
            all.println();
            idx.println(f.getName() + "," + f.getEntryPoint() + "," + f.getBody().getNumAddresses()
                    + "," + body.split("\n", -1).length + "," + status);
            done++;
            if (done % 500 == 0) { all.flush(); idx.flush(); println("  " + done); }
        }
        all.close();
        idx.close();
        di.dispose();
        println("DONE " + base + ": functions=" + done + " failed=" + failed);
    }
}
