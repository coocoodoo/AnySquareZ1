// Apply Go function names + exact sizes recovered by GoReSym, then export decompiled C.
// CSV format: addr,name,size   (addresses already shifted to the ELF's real textStart)
// args: <csv> <outDir> <nameFilter>
import ghidra.app.script.GhidraScript;
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.symbol.SourceType;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.List;

public class RenameGo extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String csv = args[0];
        String outDir = args[1];
        String filter = args.length > 2 ? args[2] : "";
        if (filter.equals("-")) filter = "";

        new File(outDir).mkdirs();
        String base = currentProgram.getName().replaceAll("[^A-Za-z0-9._-]", "_");
        FunctionManager fm = currentProgram.getFunctionManager();

        int renamed = 0, created = 0, skipped = 0, oob = 0;
        List<Function> targets = new ArrayList<>();
        BufferedReader br = new BufferedReader(new FileReader(csv));
        String line;
        while ((line = br.readLine()) != null) {
            line = line.trim();
            if (line.isEmpty() || line.startsWith("#")) continue;
            String[] p = line.split(",");
            if (p.length < 2) continue;
            String a = p[0].trim();
            String name = p[1].trim();
            long size = 1;
            if (p.length > 2) {
                try { size = Long.parseLong(p[2].trim()); } catch (NumberFormatException e) { size = 1; }
            }
            if (a.startsWith("0x") || a.startsWith("0X")) a = a.substring(2);
            Address addr;
            try { addr = toAddr(a); } catch (Exception e) { skipped++; continue; }
            if (addr == null || !currentProgram.getMemory().contains(addr)) { oob++; continue; }

            Function f = fm.getFunctionAt(addr);
            try {
                if (f == null || !f.getEntryPoint().equals(addr)) {
                    // make sure the bytes are instructions, then define the exact body
                    Address end = addr.add(Math.max(1, size) - 1);
                    if (!currentProgram.getMemory().contains(end)) end = addr.add(3);
                    DisassembleCommand dis = new DisassembleCommand(addr, new AddressSet(addr, end), true);
                    dis.applyTo(currentProgram, monitor);
                    f = createFunction(addr, name);
                    if (f == null) { skipped++; continue; }
                    created++;
                } else {
                    renamed++;
                }
                f.setName(name, SourceType.USER_DEFINED);
            } catch (Exception e) {
                skipped++;
                continue;
            }
            if (f != null && (filter.isEmpty() || name.contains(filter))) targets.add(f);
        }
        br.close();
        println("names: created=" + created + " renamed=" + renamed + " skipped=" + skipped
                + " outOfRange=" + oob + " exportTargets=" + targets.size());

        DecompInterface di = new DecompInterface();
        di.toggleCCode(true);
        di.toggleSyntaxTree(false);
        di.setSimplificationStyle("decompile");
        if (!di.openProgram(currentProgram)) {
            println("decompiler open failed: " + di.getLastMessage());
            return;
        }

        PrintWriter all = new PrintWriter(new FileWriter(new File(outDir, base + ".c")));
        PrintWriter idx = new PrintWriter(new FileWriter(new File(outDir, base + ".index.csv")));
        idx.println("name,address,size,lines,status");
        all.println("// " + base + " — Go names from GoReSym + Ghidra 12.1.3 decompiler");
        int done = 0, failed = 0;
        for (Function f : targets) {
            if (monitor.isCancelled()) break;
            String name = f.getName(true);
            String body;
            String status = "ok";
            try {
                DecompileResults r = di.decompileFunction(f, 120, monitor);
                if (r != null && r.decompileCompleted() && r.getDecompiledFunction() != null) {
                    body = r.getDecompiledFunction().getC();
                } else {
                    body = "/* decompile failed: " + (r == null ? "null" : r.getErrorMessage()) + " */";
                    status = "failed";
                    failed++;
                }
            } catch (Exception e) {
                body = "/* exception: " + e.getMessage() + " */";
                status = "error";
                failed++;
            }
            all.println();
            all.println("/* ===== " + name + " @ " + f.getEntryPoint() + " size=" + f.getBody().getNumAddresses() + " ===== */");
            all.print(body);
            all.println();
            idx.println(name.replace(',', '_') + "," + f.getEntryPoint() + ","
                    + f.getBody().getNumAddresses() + "," + body.split("\n", -1).length + "," + status);
            done++;
            if (done % 250 == 0) {
                println("  decompiled " + done + " (" + name + ")");
                all.flush();
                idx.flush();
            }
        }
        all.close();
        idx.close();
        di.dispose();
        println("DONE " + base + ": exported=" + done + " failed=" + failed + " -> " + outDir);
    }
}
