package problemsolving;

import java.util.*;

public class hulk {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int input = sc.nextInt();

        for (int i = 1; i <= input; i++) {
            System.out.print("I " + (i % 2 == 0 ? "love" : "hate") + " " + (i == input ? "it " : "that "));
        }

        sc.close();
    }
}