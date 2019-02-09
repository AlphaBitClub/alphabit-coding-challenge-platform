import java.util.Scanner;

public class small_sum_accepted {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int s = 0;
        for (int i = 0; i <= n; i++) {
            s += i;
        }
        System.out.println(s);
    }
}