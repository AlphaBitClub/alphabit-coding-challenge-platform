import java.lang.ProcessBuilder.Redirect.Type;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

public class Water_flow{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        float flow = Float.parseFloat(sc.nextLine());
        int nValves = Integer.parseInt(sc.nextLine());
        // valve bandiwth
        String[] vBande = sc.nextLine().split("\\s+");
        int[] valvesBandwidth = new int[vBande.length];
        for (int i=0 ; i< vBande.length;i++) {
            valvesBandwidth[i] = Integer.parseInt(vBande[i]);            
        }
        // delays
        String[] del = sc.nextLine().trim().split("\\s+");
        int [] delays = new int[del.length + 1];
        delays[0]= 0;

        for(int i = 0; i< del.length;i++){
            delays[i+1] = Integer.parseInt(del[i]);
        }
        sc.close();
        // solution
        ArrayList<Float> result = new ArrayList<Float>();
        result.add(flow/valvesBandwidth[0]);
        
        for (int i = 1; i< delays.length; i++){
            delays[i] += delays[i-1];
            result.add(flow/valvesBandwidth[i]+ delays[i]);
        }
        int theValve = result.indexOf(Collections.min(result)) + 1;

        System.out.println(theValve);
    }
}