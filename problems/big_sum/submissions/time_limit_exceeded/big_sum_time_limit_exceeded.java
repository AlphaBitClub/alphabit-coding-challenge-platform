import java.util.Scanner;

public class big_sum_time_limit_exceeded {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        long s = 0;
        for (long i = 0; i <= n; i++) {
            s += i;
        }
        System.out.println(s);
    }
}