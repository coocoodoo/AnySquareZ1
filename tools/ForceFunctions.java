// Rebuild function bodies from an explicit (addr,name,size) list: delete existing
// functions, disassemble each exact range, then create the function with that body.
// Needed for the kernel, where kallsyms names came in without sizes and Ghidra made
// 1-byte stubs.
// args: <csv addr,name,size> <outDir>
import ghidra.app.script.GhidraScript;
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.symbol.SourceType;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.List;

public class ForceFunctions extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String csv = args[0];
        String outDir = args[1];
        new File(outDir).mkdirs();
        String base = currentProgram.getName().replaceAll("[^A-Za-z0-9._-]", "_");
        FunctionManager fm = currentProgram.getFunctionManager();

        // 1. drop every function Ghidra created (labels/disassembly stay)
        List<Address> old = new ArrayList<>();
        FunctionIterator fit = fm.getFunctions(true);
        int removed = 0;
        int tx = currentProgram.startTransaction("remove functions");
        while (fit.hasNext()) {
            old.add(fit.next().getEntryPoint());
        }
        for (Address a : old) {
            Function f = fm.getFunctionAt(a);
            if (f != null) {
                try { fm.removeFunction(a); removed++; } catch (Exception e) { }
            }
        }
        currentProgram.endTransaction(tx, true);
        println("removed functions: " + removed);

        // 2. recreate from the symbol list with exact bodies
        List<Function> targets = new ArrayList<>();
        BufferedReader br = new BufferedReader(new FileReader(csv));
        String line;
        int made = 0, failed = 0;
        while ((line = br.readLine()) != null) {
            line = line.trim();
            if (line.isEmpty() || line.startsWith("#")) continue;
            int c1 = line.indexOf(',');
            int c2 = line.lastIndexOf(',');
            if (c1 < 0 || c2 <= c1) continue;
            String a = line.substring(0, c1).trim();
            String name = line.substring(c1 + 1, c2).trim();
            long size;
            try { size = Long.parseLong(line.substring(c2 + 1).trim()); } catch (Exception e) { continue; }
            if (a.startsWith("0x")) a = a.substring(2);
            Address entry;
            try { entry = toAddr(a); } catch (Exception e) { continue; }
            if (entry == null || !currentProgram.getMemory().contains(entry)) continue;
            if (size <= 0) {
                Address next = entry.add(4);
                size = 4;
            }
            Address end = entry.add(size - 1);
            if (!currentProgram.getMemory().contains(end)) end = entry.add(3);
            try {
                int t = currentProgram.startTransaction("define " + name);
                DisassembleCommand dis = new DisassembleCommand(entry, new AddressSet(entry, end), true);
                dis.applyTo(currentProgram, monitor);
                AddressSet body = new AddressSet(entry, end);
                Function f = fm.createFunction(name, entry, body, SourceType.USER_DEFINED);
                currentProgram.endTransaction(t, true);
                if (f != null) { made++; targets.add(f); }
                else failed++;
            } catch (Exception e) {
                failed++;
            }
        }
        br.close();
        println("functions created: " + made + " failed: " + failed);

        // 3. decompile them
        DecompInterface di = new DecompInterface();
        di.toggleCCode(true);
        di.toggleSyntaxTree(false);
        di.setSimplificationStyle("decompile");
        if (!di.openProgram(currentProgram)) { println("decompiler open failed"); return; }

        PrintWriter all = new PrintWriter(new FileWriter(new File(outDir, base + ".c")));
        PrintWriter idx = new PrintWriter(new FileWriter(new File(outDir, "index.csv")));
        idx.println("name,address,size,lines,status");
        all.println("// " + base + " — bodies rebuilt from kallsyms + Ghidra decompiler");
        int done = 0, dfail = 0;
        for (Function f : targets) {
            if (monitor.isCancelled()) break;
            String body, status = "ok";
            try {
                DecompileResults r = di.decompileFunction(f, 180, monitor);
                if (r != null && r.decompileCompleted() && r.getDecompiledFunction() != null) {
                    body = r.getDecompiledFunction().getC();
                } else { body = "/* decompile failed */"; status = "failed"; dfail++; }
            } catch (Exception e) { body = "/* exception */"; status = "error"; dfail++; }
            all.println();
            all.println("/* ===== " + f.getName() + " @ " + f.getEntryPoint() + " size=" + f.getBody().getNumAddresses() + " ===== */");
            all.print(body);
            all.println();
            idx.println(f.getName().replace(',', '_') + "," + f.getEntryPoint() + ","
                    + f.getBody().getNumAddresses() + "," + body.split("\n", -1).length + "," + status);
            done++;
            if (done % 500 == 0) { all.flush(); idx.flush(); println("  decompiled " + done); }
        }
        all.close();
        idx.close();
        di.dispose();
        println("DONE " + base + ": exported=" + done + " failed=" + dfail);
    }
}
