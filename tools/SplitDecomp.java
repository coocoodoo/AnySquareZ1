// Decompiler-blocked functions: split the range at internal branch/call targets and
// decompile the pieces, so a single undecodable instruction does not kill 24 KB of code.
// args: <csv addr,name> <outDir>
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.symbol.SourceType;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.TreeSet;

public class SplitDecomp extends GhidraScript {
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

        PrintWriter all = new PrintWriter(new FileWriter(new File(outDir, "split-" + base + ".c")));
        PrintWriter idx = new PrintWriter(new FileWriter(new File(outDir, "split-index-" + base + ".csv")));
        idx.println("name,address,size,lines,status");

        BufferedReader br = new BufferedReader(new FileReader(csv));
        String line;
        int okParts = 0, badParts = 0;
        while ((line = br.readLine()) != null) {
            line = line.trim();
            if (line.isEmpty() || line.startsWith("#")) continue;
            int c = line.indexOf(',');
            if (c < 0) continue;
            String a = line.substring(0, c).trim();
            String name = line.substring(c + 1).trim();
            if (a.startsWith("0x")) a = a.substring(2);
            Address entry = toAddr(a);
            Function f = fm.getFunctionAt(entry);
            if (f == null) continue;
            ghidra.program.model.address.AddressSetView body = f.getBody();
            Address end = body.getMaxAddress();

            // collect split points: function entry + every branch/call target inside
            TreeSet<Address> points = new TreeSet<>();
            points.add(entry);
            InstructionIterator it = currentProgram.getListing().getInstructions(body, true);
            while (it.hasNext()) {
                Instruction ins = it.next();
                for (Reference r : ins.getReferencesFrom()) {
                    Address t = r.getToAddress();
                    if (t != null && body.contains(t) && !t.equals(entry)
                            && (r.getReferenceType().isCall() || r.getReferenceType().isJump())) {
                        points.add(t);
                    }
                }
            }
            List<Address> pts = new ArrayList<>(points);
            Collections.sort(pts);
            println(name + ": " + pts.size() + " split points in " + body.getNumAddresses() + " bytes");

            // the original (undecodable) function must go, or every part creation collides
            try {
                int tx0 = currentProgram.startTransaction("drop original");
                fm.removeFunction(entry);
                currentProgram.endTransaction(tx0, true);
            } catch (Exception ex) { println("could not drop original: " + ex.getMessage()); }

            for (int i = 0; i < pts.size(); i++) {
                Address s = pts.get(i);
                Address e = (i + 1 < pts.size()) ? pts.get(i + 1).subtract(1) : end;
                String pname = name + "_part" + (i + 1);
                Function pf = fm.getFunctionAt(s);
                if (pf == null || !pf.getEntryPoint().equals(s)) {
                    try {
                        int tx = currentProgram.startTransaction("split");
                        pf = fm.createFunction(pname, s, new AddressSet(s, e), SourceType.USER_DEFINED);
                        currentProgram.endTransaction(tx, true);
                    } catch (Exception ex) { }
                }
                if (pf == null) continue;
                String body_text, status = "ok";
                try {
                    DecompileResults r = di.decompileFunction(pf, 240, monitor);
                    if (r != null && r.decompileCompleted() && r.getDecompiledFunction() != null) {
                        body_text = r.getDecompiledFunction().getC();
                        okParts++;
                    } else {
                        body_text = "/* part failed: " + (r == null ? "null" : r.getErrorMessage()) + " */";
                        status = "failed";
                        badParts++;
                    }
                } catch (Exception ex) {
                    body_text = "/* exception */"; status = "error"; badParts++;
                }
                all.println();
                all.println("/* ===== " + pname + " @ " + s + " (part of " + name + ") ===== */");
                all.print(body_text);
                all.println();
                idx.println(pname + "," + s + "," + pf.getBody().getNumAddresses() + ","
                        + body_text.split("\n", -1).length + "," + status);
            }
        }
        br.close();
        all.close();
        idx.close();
        di.dispose();
        println("DONE split " + base + ": parts ok=" + okParts + " failed=" + badParts);
    }
}
