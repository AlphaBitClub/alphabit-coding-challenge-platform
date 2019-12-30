import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class Greedy_ads{
    public static void main(String[] args) {
        // contain the sum as a key of each channel 
        ArrayList<ArrayList<Integer>> ch = new ArrayList<ArrayList<Integer>>();
        ArrayList<Integer> ads = new ArrayList<Integer>() ; 
        ArrayList<Integer> sums = new ArrayList<Integer>();

        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());

        String[] adString =  sc.nextLine().split(",");

        for (int i =0 ; i< adString.length; i++) {
            ads.add(Integer.parseInt(adString[i]));
        }
        
        for(int i=0; i<n ; i++){
            ArrayList<Integer> chaine = new ArrayList<Integer>();
            ch.add(chaine);
            sums.add(0);

        }
        // sort in reverse
        Collections.sort(ads,Collections.reverseOrder());
        for (int ad : ads) {
            int indexMin = sums.indexOf(Collections.min(sums));
            ch.get(indexMin).add(ad);
            sums.set(indexMin,sums.get(indexMin)+ad);
            
            
        }

        System.out.println(ch);
        
        
        sc.close();

    }
}