import java.util.Scanner;

public class big_sum_accepted {
    public static void main(String[] args) {
        // INPUT
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();

        // summation formula
        long s = n * (n + 1) / 2;

        // OUTPUT
        System.out.println(s);
    }
}