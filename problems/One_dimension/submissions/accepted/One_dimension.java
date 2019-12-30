import java.util.Scanner;

public class One_dimension {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String line1 = sc.nextLine();
        String[] array = line1.split("\\s+");
        String line2 = sc.nextLine();
        String[] nm = line2.split("\\s+");
        int n = Integer.parseInt(nm[0]);
        int m = Integer.parseInt(nm[1]);
        String line3 = sc.nextLine();
        String[] ij = line3.split("\\s+");
        int i = Integer.parseInt(ij[0]);
        int j = Integer.parseInt(ij[1]);
        int matrixResult = i * (n - 1) + j * (m - 1);
        System.out.println(array[matrixResult]);
    }
}