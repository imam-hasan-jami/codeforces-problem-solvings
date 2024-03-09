package problemsolving;

import java.util.*;

public class antonAndDanik {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        @SuppressWarnings("unused")
        int n = sc.nextInt();
        String s = sc.next();
        int anton = 0;
        int danik = 0;

        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == 'A') {
                anton++;
            } else if (s.charAt(i) == 'D') {
                danik++;
            }
        }

        if (anton > danik) {
            System.out.println("Anton");
        } else if (danik > anton) {
            System.out.println("Danik");
        } else {
            System.out.println("Friendship");
        }

        sc.close();
    }
}
