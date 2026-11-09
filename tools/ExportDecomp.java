// Export Ghidra decompiled C for a filtered set of functions.
// args: <outDir> [namePrefix] [maxFunctions]
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import java.io.File;
import java.io.FileWriter;
import java.io.PrintWriter;

public class ExportDecomp extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String outDir = args.length > 0 ? args[0] : "C:/tmp/decomp";
        String prefix = args.length > 1 ? args[1] : "";
        if (prefix.equals("-")) prefix = "";
        int max = 0;
        if (args.length > 2) {
            try { max = Integer.parseInt(args[2]); } catch (NumberFormatException e) { max = 0; }
        }

        new File(outDir).mkdirs();
        String base = currentProgram.getName().replaceAll("[^A-Za-z0-9._-]", "_");

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

        FunctionManager fm = currentProgram.getFunctionManager();
        int done = 0, failed = 0, line = 0;
        all.println("// " + base + " — Ghidra 12.1.3 decompiler output");
        all.println("// arch=" + currentProgram.getLanguage().getLanguageID()
                + " imageBase=" + currentProgram.getImageBase());
        line = 2;

        for (Function f : fm.getFunctions(true)) {
            if (monitor.isCancelled()) break;
            String name = f.getName(true);
            if (prefix.length() > 0 && !name.contains(prefix)) continue;
            if (max > 0 && done >= max) break;

            String body;
            String status = "ok";
            try {
                DecompileResults r = di.decompileFunction(f, 90, monitor);
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
            int startLine = line + 2;
            int n = body.split("\n", -1).length;
            all.print(body);
            all.println();
            line += n + 3;
            idx.println(name.replace(',', '_') + "," + f.getEntryPoint() + ","
                    + f.getBody().getNumAddresses() + "," + n + "," + status);
            done++;
            if (done % 200 == 0) {
                println("  decompiled " + done + " (" + name + ")");
                all.flush();
                idx.flush();
            }
        }

        all.close();
        idx.close();
        di.dispose();
        println("DONE " + base + ": functions=" + done + " failed=" + failed + " -> " + outDir);
    }
}
