// Fallback for functions the decompiler rejects: emit the annotated ARM listing so
// nothing is left without an artifact.
// args: <csv addr,name> <outDir>
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionManager;
import ghidra.program.model.listing.Instruction;
import ghidra.program.model.listing.InstructionIterator;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.PrintWriter;

public class ExportAsm extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String csv = args[0];
        String outDir = args[1];
        new File(outDir).mkdirs();
        String base = currentProgram.getName().replaceAll("[^A-Za-z0-9._-]", "_");
        FunctionManager fm = currentProgram.getFunctionManager();

        PrintWriter out = new PrintWriter(new FileWriter(new File(outDir, "asm-" + base + ".c")));
        PrintWriter idx = new PrintWriter(new FileWriter(new File(outDir, "asm-index-" + base + ".csv")));
        idx.println("name,address,size,lines,status");
        out.println("// " + base + " — ARM listings for functions the decompiler rejects");

        BufferedReader br = new BufferedReader(new FileReader(csv));
        String line;
        int n = 0;
        while ((line = br.readLine()) != null) {
            line = line.trim();
            if (line.isEmpty() || line.startsWith("#")) continue;
            int c = line.indexOf(',');
            if (c < 0) continue;
            String a = line.substring(0, c).trim();
            String name = line.substring(c + 1).trim();
            if (a.startsWith("0x")) a = a.substring(2);
            Address entry;
            try { entry = toAddr(a); } catch (Exception e) { continue; }
            Function f = fm.getFunctionAt(entry);
            out.println();
            out.println("/* ===== " + name + " @ " + entry + " (assembly) ===== */");
            out.println(name + ":");
            int lines = 0;
            InstructionIterator it = currentProgram.getListing().getInstructions(
                    f != null ? f.getBody() : new ghidra.program.model.address.AddressSet(entry, entry.add(64)), true);
            while (it.hasNext()) {
                Instruction ins = it.next();
                out.println("    " + ins.getAddress() + "  " + ins.toString());
                lines++;
            }
            long size = f != null ? f.getBody().getNumAddresses() : 0;
            idx.println(name.replace(',', '_') + "," + entry + "," + size + "," + lines + ",asm");
            n++;
        }
        br.close();
        out.close();
        idx.close();
        println("DONE asm " + base + ": functions=" + n);
    }
}
