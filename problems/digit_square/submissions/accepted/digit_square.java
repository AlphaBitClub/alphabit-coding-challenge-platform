import java.util.Scanner;

public class digit_square {
    public static void main(String[] args) {
        // INPUT
        Scanner sc = new Scanner(System.in);
        String line = sc.nextLine();
        char ch;
        int nDigit;
        String digit;
        for (int i = 0; i < line.length(); i++) {
            ch = line.charAt(i);
            digit = "" + ch;
            nDigit = Integer.parseInt(digit);
            System.out.print(nDigit * nDigit);
        }
        sc.close();
    }
}