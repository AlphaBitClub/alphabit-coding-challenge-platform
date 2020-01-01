import java.util.Scanner;

public class Simplified_tetris{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int d = Integer.parseInt(sc.nextLine());
        int s = Integer.parseInt(sc.nextLine());
        int n = Integer.parseInt(sc.nextLine());
        
        sc.close();

        if(n==1){
            System.out.println(s);
        }else{
            if ((2*d+s) >= n) {
                if ( n % 2 == 0) {
                    System.out.println( (4*d +s ) / n);
                } else {
                    if ((2*d) >= s) { 
                        System.out.println(s);
                    } else {
                        System.out.println( (4*d + s )/n );

                    }
                }
            } else {
                System.out.println(0);                
            }
        }
    }
}