import java.util.Scanner;

public class Star_wars_virtuel_queue{
    
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int numInputs = scan.nextInt();
        scan.close();
        // rows
        for(int i = 1; i <= numInputs; i++){ 
            
            int j = numInputs;
            
            // loop to print (size - i) spaces
            while(j-- > i) {
                System.out.print("0");
            }
            // loop to print (i) #s
            while(j-- >= 0) {
                System.out.print("1");
            }
            
            System.out.println();
        }
        
    }   
    
}