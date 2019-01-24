import java.util.Scanner;

public class multiples_accepted {
    public static final long P = 1000000007;

    public static long calc_multiples(long x, long n) {
        long multi_num = n / x;
        long sum = (multi_num * (multi_num + 1) / 2) % P;
        sum = (sum * x) % P;
        return sum;
    }

    public static void main(String[] args) {
        long x, y, n, s;
        long mx, my, mxy;

        Scanner sc = new Scanner(System.in);
        String line = sc.nextLine();
        x = Long.parseUnsignedLong(line.split("\\s+")[0]);
        y = Long.parseUnsignedLong(line.split("\\s+")[1]);
        n = Long.parseUnsignedLong(sc.nextLine());

        mx = calc_multiples(x, n);
        my = calc_multiples(y, n);
        mxy = calc_multiples(x * y, n);

        s = (mx + my - mxy) % P;
        System.out.print(s);
    }
}