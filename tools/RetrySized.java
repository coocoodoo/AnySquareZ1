// Targeted decompile: for each (addr,name,size) rebuild the function with an exact body
// (removing whatever Ghidra made there), then decompile it. Works around functions the
// default ARMv7/v8 language rejects by running under an older ARM language.
// args: <csv addr,name,size> <outDir>
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

public class RetrySized extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String csv = args[0];
        String outDir = args[1];
        new File(outDir).mkdirs();
        String base = currentProgram.getName().replaceAll("[^A-Za-z0-9._-]", "_");
        FunctionManager fm = currentProgram.getFunctionManager();

        DecompInterface di = new DecompInterface();
        di.toggleCCode(true);
        di.toggleSyntaxTree(false);
        di.setSimplificationStyle("decompile");
        if (!di.openProgram(currentProgram)) { println("decompiler open failed"); return; }

        PrintWriter all = new PrintWriter(new FileWriter(new File(outDir, "sized-" + base + ".c")));
        PrintWriter idx = new PrintWriter(new FileWriter(new File(outDir, "sized-index-" + base + ".csv")));
        idx.println("name,address,size,lines,status");
        all.println("// " + base + " — rebuilt function bodies (fixed language)");

        BufferedReader br = new BufferedReader(new FileReader(csv));
        String line;
        int ok = 0, bad = 0;
        while ((line = br.readLine()) != null) {
            line = line.trim();
            if (line.isEmpty() || line.startsWith("#")) continue;
            String[] p = line.split(",");
            if (p.length < 3) continue;
            String a = p[0].trim();
            String name = p[1].trim();
            long size;
            try { size = Long.parseLong(p[2].trim()); } catch (Exception e) { continue; }
            if (a.startsWith("0x")) a = a.substring(2);
            Address entry = toAddr(a);
            if (entry == null || !currentProgram.getMemory().contains(entry)) continue;
            if (size <= 0) size = 4;
            Address end = entry.add(size - 1);
            if (!currentProgram.getMemory().contains(end)) continue;

            AddressSet body = new AddressSet(entry, end);
            int tx = currentProgram.startTransaction("rebuild " + name);
            try {
                // drop anything overlapping the target range
                List<Address> clash = new ArrayList<>();
                ghidra.program.model.listing.FunctionIterator fit = fm.getFunctions(body, true);
                while (fit.hasNext()) clash.add(fit.next().getEntryPoint());
                for (Address c : clash) {
                    Function f = fm.getFunctionAt(c);
                    if (f != null) fm.removeFunction(c);
                }
                DisassembleCommand dis = new DisassembleCommand(entry, body, true);
                dis.applyTo(currentProgram, monitor);
                Function nf = fm.createFunction(name, entry, body, SourceType.USER_DEFINED);
                currentProgram.endTransaction(tx, true);
                if (nf == null) { bad++; idx.println(name + "," + entry + "," + size + ",0,create-failed"); continue; }
                String text, status = "ok";
                DecompileResults r = di.decompileFunction(nf, 300, monitor);
                if (r != null && r.decompileCompleted() && r.getDecompiledFunction() != null) {
                    text = r.getDecompiledFunction().getC();
                    ok++;
                } else {
                    text = "/* failed: " + (r == null ? "null" : r.getErrorMessage()) + " */";
                    status = "failed"; bad++;
                }
                all.println();
                all.println("/* ===== " + name + " @ " + entry + " size=" + size + " ===== */");
                all.print(text);
                all.println();
                idx.println(name.replace(',', '_') + "," + entry + "," + size + ","
                        + text.split("\n", -1).length + "," + status);
            } catch (Exception ex) {
                currentProgram.endTransaction(tx, false);
                bad++;
                idx.println(name.replace(',', '_') + "," + entry + "," + size + ",0,exception");
            }
        }
        br.close();
        all.close();
        idx.close();
        di.dispose();
        println("DONE sized " + base + ": ok=" + ok + " failed=" + bad);
    }
}
