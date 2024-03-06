package problemsolving;

import java.util.*;

public class wordCapitalization {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String word = sc.next();
        String uppercaseWord = word.substring(0,1).toUpperCase() + word.substring(1);
        System.out.println(uppercaseWord);

        sc.close();
    }
}
