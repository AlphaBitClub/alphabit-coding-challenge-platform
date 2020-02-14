import java.util.Scanner;

public class Nokia_keypad {
    public static void main(String[] args) {
        String[] letters = { "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
        Scanner sc = new Scanner(System.in);
        String n = sc.nextLine();
        String line = sc.nextLine();
        String[] sequence = line.split("\\s+");
        int current, length, lw, position;
        for (int i = 0; i < sequence.length; i++) {
            current = Integer.parseInt(sequence[i]);
            if (current == 0) {
                System.out.print(" ");
            } else {
                position = current % 10 - 2;
                length = position == 5 || position == 7 ? 4 : 3;
                lw = sequence[i].length();
                System.out.print(letters[position].charAt((lw - 1) % length));
            }
        }
        sc.close();
        // OUTPUT
        System.out.println("");
    }
}