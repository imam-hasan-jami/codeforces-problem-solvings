package problemsolving;

import java.util.*;

public class reverseString {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();

        StringBuilder sb = new StringBuilder();
        for (int i = s.length()-1; i >= 0; i--) {
            sb.append(s.charAt(i));
        }

        //String t = sb.toString();
        System.out.println(sb.toString());

        sc.close();
    }
}