package problemsolving;

import java.util.*;

public class wayToLongWords {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        for (int i = 0; i <= n; i++) {
            String s = sc.nextLine();

            int length = s.length();
            if (length < 11) {
                System.out.println(s);
            } else {
                char ch = s.charAt(0);
                char ch1 = s.charAt(length - 1);
                System.out.println("" + ch + (length - 2) + ch1);
            }
        }
    }
}
