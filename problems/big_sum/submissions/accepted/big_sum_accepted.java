import java.util.Scanner;

public class small_sum_accepted {

    public static void main(String[] args) {
        final int P = 1000000007;

        // INPUT
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        // summation formula
        int s = (n * (n + 1) / 2) % P;

        // OUTPUT
        System.out.println(s);
    }
}