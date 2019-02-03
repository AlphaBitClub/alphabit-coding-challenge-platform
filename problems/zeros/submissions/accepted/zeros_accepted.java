import java.util.Scanner;

public class zeros_accepted {

    public static int multiplicity(int x, int y) {
        int count = 0;
        while (x % y == 0) {
            x /= y;
            count++;
        }
        return count;
    }

    public static void main(String[] args) {
        int x;
        long n;
        Scanner sc = new Scanner(System.in);
        n = sc.nextLong();
        int two = 0, five = 0;
        for (long i = 0; i < n; i++) {
            x = sc.nextInt();
            if (x % 2 == 0)
                two += multiplicity(x, 2);
            if (x % 5 == 0)
                five += multiplicity(x, 5);
        }

        System.out.print(two < five ? two : five);
    }
}