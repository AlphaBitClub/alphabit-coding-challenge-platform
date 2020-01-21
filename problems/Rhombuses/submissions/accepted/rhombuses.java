import java.util.Scanner;

public class rhombuses {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Long n = sc.nextLong();
        System.out.println(n * (n + 1) * (2 * n + 1) / 6);
        sc.close();
    }
}