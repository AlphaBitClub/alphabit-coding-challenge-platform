import java.util.Scanner;

public class treeMagic { 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int g = Integer.parseInt(sc.nextLine());
        System.out.println( Math.round( (g-1) * (Math.pow(2, g)) + 1 ));

        sc.close();
    }
}