// Retry specific functions (decompiler timeouts / errors) with a long timeout.
// args: <csv addr,name> <outDir>
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

public class RetryDecomp extends GhidraScript {
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
        di.setOptions(di.getOptions());
        if (!di.openProgram(currentProgram)) { println("decompiler open failed"); return; }

        PrintWriter all = new PrintWriter(new FileWriter(new File(outDir, "retry-" + base + ".c")));
        PrintWriter idx = new PrintWriter(new FileWriter(new File(outDir, "retry-index-" + base + ".csv")));
        idx.println("name,address,size,lines,status");
        all.println("// " + base + " — retried functions");

        BufferedReader br = new BufferedReader(new FileReader(csv));
        String line;
        int done = 0, ok = 0;
        while ((line = br.readLine()) != null) {
            line = line.trim();
            if (line.isEmpty() || line.startsWith("#")) continue;
            int c = line.indexOf(',');
            if (c < 0) continue;
            String a = line.substring(0, c).trim();
            String name = line.substring(c + 1).trim();
            if (a.startsWith("0x")) a = a.substring(2);
            Address addr;
            try { addr = toAddr(a); } catch (Exception e) { continue; }
            if (addr == null || !currentProgram.getMemory().contains(addr)) continue;

            Function f = fm.getFunctionAt(addr);
            if (f == null) {
                // recreate a plausibly sized body by disassembling until flow ends
                try {
                    DisassembleCommand dis = new DisassembleCommand(addr, null, true);
                    dis.applyTo(currentProgram, monitor);
                    f = createFunction(addr, name);
                } catch (Exception e) { }
            }
            if (f == null) {
                idx.println(name.replace(',', '_') + "," + addr + ",0,0,no-function");
                continue;
            }
            String body, status = "ok";
            try {
                DecompileResults r = di.decompileFunction(f, 600, monitor);
                if (r != null && r.decompileCompleted() && r.getDecompiledFunction() != null) {
                    body = r.getDecompiledFunction().getC();
                    ok++;
                } else {
                    body = "/* still failed: " + (r == null ? "null" : r.getErrorMessage()) + " */";
                    status = "failed";
                }
            } catch (Exception e) {
                body = "/* exception: " + e.getMessage() + " */";
                status = "error";
            }
            all.println("/* ===== " + f.getName() + " @ " + f.getEntryPoint() + " size=" + f.getBody().getNumAddresses() + " ===== */");
            all.print(body);
            all.println();
            idx.println(f.getName().replace(',', '_') + "," + f.getEntryPoint() + ","
                    + f.getBody().getNumAddresses() + "," + body.split("\n", -1).length + "," + status);
            done++;
            println("  retried " + done + " " + name + " -> " + status);
        }
        br.close();
        all.close();
        idx.close();
        di.dispose();
        println("DONE retry " + base + ": attempted=" + done + " recovered=" + ok);
    }
}
