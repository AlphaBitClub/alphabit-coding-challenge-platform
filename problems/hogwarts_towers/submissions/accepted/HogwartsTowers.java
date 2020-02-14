import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class HogwartsTowers{
    public static void main(String[] args) {
        ArrayList<Integer> mountains = new ArrayList<Integer>();
        int altitude = 9;
        String result = "";
        boolean lost = false;

        Scanner sc = new Scanner(System.in);
        String[] temp = sc.nextLine().split(" ");
        for(int i = 0 ; i< 8 ; i++){
            mountains.add(Integer.parseInt(temp[i]));

        }

        for( int i = 0 ; i < 8;i++){
            int indexMax = mountains.indexOf(Collections.max(mountains));
            result += String.valueOf(indexMax +1 ) + " ";
            int lookAhead = mountains.indexOf(Collections.max(mountains));

            if(mountains.get(lookAhead)>altitude){
                lost = true;
                break;
            }

            mountains.set(indexMax, 0);
            altitude --;
        }

        if(lost){
            System.out.println("Hogwarts is down");            

        }else{
            System.out.println(result);            
        }

        sc.close();
    }
}