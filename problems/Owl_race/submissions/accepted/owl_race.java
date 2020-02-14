import java.util.Scanner;
import java.lang.Math;

public class owl_race {
    public static void main(String[] args) {
        int x1, v1, x2, v2;
        Scanner sc = new Scanner(System.in);
        x1 = sc.nextInt();
        v1 = sc.nextInt();
        x2 = sc.nextInt();
        v2 = sc.nextInt();

        if (v1 == v2) {
            if (x1 == x2)
                System.out.print("YES");
            else
                System.out.print("NO");
        } else {
            int t = Math.abs((x2 - x1) / (v1 - v2));
            int eq1 = x1 + v1 * t;
            int eq2 = x2 + v2 * t;
            if (eq1 == eq2)
                System.out.print("YES");
            else
                System.out.print("NO");
        }
        sc.close();
    }
}