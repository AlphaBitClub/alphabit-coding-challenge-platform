import java.util.Scanner;
import java.lang.Math;

public class rhombuses {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Long n = sc.nextLong();
        long result = 0;
        for (int i = 0; i <= n; i++) {
            result += Math.pow(i, 2);
        }
        System.out.println(result);
        sc.close();
    }
}