import java.util.Scanner;

public class multiples_accepted {

    public static long calc_multiples(long x, long n) {
        long multi_num = n / x;
        long sum = multi_num * (multi_num + 1) / 2;
        sum = sum * x;
        return sum;
    }

    public static void main(String[] args) {
        long x, y, n, s;
        long mx, my, mxy;

        Scanner sc = new Scanner(System.in);
        x = sc.nextLong();
        y = sc.nextLong();
        n = sc.nextLong();

        mx = calc_multiples(x, n);
        my = calc_multiples(y, n);
        mxy = calc_multiples(x * y, n);

        s = mx + my - mxy;
        System.out.print(s);
    }
}