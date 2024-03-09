package problemsolving;

import java.util.*;

public class translation {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String S = sc.nextLine();
        String T = sc.nextLine();

        // String reverseS = "";

        StringBuilder sb = new StringBuilder();
        for (int i = S.length() - 1; i >= 0; i--) {
            sb.append(S.charAt(i));
        }

        String reverseS = sb.toString();

        // System.out.println(T);
        // System.out.println(reverseS);

        if (T.equals(reverseS)) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }

        sc.close();
    }
}