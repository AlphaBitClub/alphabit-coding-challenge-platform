import java.util.Scanner;

public class ascii_square {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char c = sc.next().charAt(0);
        String line = "";
        int middle = c - 65;
        int len = middle * 2 + 1;
        for (int i = 0; i < len; i++)
            line += c;
        StringBuilder wline = new StringBuilder(line);
        String end = "";
        System.out.println(line);
        for (int i = 1; i <= middle; i++) {
            end = wline + "\n" + end;
            c--;
            for (int j = i; j < len - i; j++)
                wline.setCharAt(j, c);
            System.out.println(wline);
        }
        System.out.print(end);
    }
}