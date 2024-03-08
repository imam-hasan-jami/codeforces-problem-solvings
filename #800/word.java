package problemsolving;

import java.util.*;

public class word {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String word = sc.nextLine();

        int uppercase = 0;
        int lowercase = 0;

        for (int i = 0; i < word.length(); i++) {
            if (word.charAt(i) >= 65 && word.charAt(i) <= 90) {
                uppercase++;
            } else {
                lowercase++;
            }
        }

        if(lowercase > uppercase || lowercase == uppercase) {
            System.out.println(word.toLowerCase());
        } else {
            System.out.println(word.toUpperCase());
        }

        sc.close();
    }
}
