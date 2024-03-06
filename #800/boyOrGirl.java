package problemsolving;

import java.util.*;

public class boyOrGirl {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String word = sc.nextLine();
        int count = (int) word.chars().distinct().count();
        System.out.println(count % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");

        sc.close();
    }
}
