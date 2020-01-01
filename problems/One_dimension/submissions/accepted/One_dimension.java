import java.util.Scanner;

public class One_dimension {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String line1 = sc.nextLine();
        String[] array = line1.split("\\s+");
        String line2 = sc.nextLine();
        String[] nm = line2.split("\\s+");
        String line3 = sc.nextLine();
        String[] ij = line3.split("\\s+");
        int matrixResult = Integer.parseInt(ij[0]) * Integer.parseInt(nm[1]) + Integer.parseInt(ij[1]);
        System.out.println(array[matrixResult]);
    }
}