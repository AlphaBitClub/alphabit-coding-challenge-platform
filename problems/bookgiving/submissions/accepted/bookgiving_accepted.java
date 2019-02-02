import java.util.*;

public class bookgiving_accepted {

    public static void main(String[] args) {
        int n, rating;
        String querie, book_name;
        Stack<Pair> book_stack = new Stack<Pair>();
        Stack<Pair> max_stack = new Stack<Pair>();
        Pair p;

        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();

        for (int i = 0; i <= n; i++) {
            querie = sc.nextLine();

            if (querie.contains("Add")) {
                String line[] = querie.split("\\s+");
                book_name = line[1];
                rating = Integer.parseInt(line[2]);
                p = new Pair(book_name, rating);
                book_stack.push(p);
                if (max_stack.empty() || rating >= max_stack.peek().rating)
                    max_stack.push(p);
                else
                    max_stack.push(max_stack.peek());
            } else if (querie.equals("Give")) {
                book_stack.pop();
                max_stack.pop();
            } else if (querie.equals("Best")) {
                System.out.println(max_stack.peek().book_name + " " + max_stack.peek().rating);
            }
        }
    }
}

class Pair {
    public String book_name;
    public int rating;

    public Pair(String s, int r) {
        this.book_name = s;
        this.rating = r;
    }
}