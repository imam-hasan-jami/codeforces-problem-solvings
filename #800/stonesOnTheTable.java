package problemsolving;

import java.util.*;

public class stonesOnTheTable {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        @SuppressWarnings("unused")
        int n = sc.nextInt();

        String s = sc.next();

        int count = 0;

        for(int i=0; i<s.length()-1; i++) {
            if(s.charAt(i) == s.charAt(i+1)) {
                count++;
            }
        }

        System.out.println(count);

        sc.close();
    }
}