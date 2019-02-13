import java.util.Scanner;

public class always_late {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        String line[] = sc.nextLine().split("\\s+");
        int n = Integer.parseInt(line[0]), t = Integer.parseInt(line[1]), c = Integer.parseInt(line[2]),
                d = Integer.parseInt(line[3]);

        int[] stations = new int[n];
        for (int i = 0; i < n; i++)
            stations[i] = sc.nextInt();

        int x = (c * d) / (c - t);
        int s = (t * x) / 60;

        for (int i = 1; i < n; i++)
            if (stations[i] > s) {
                System.out.println(i);
                break;
            }

    }
}