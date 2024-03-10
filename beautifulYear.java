package problemsolving;

import java.util.*;

public class beautifulYear {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int year = sc.nextInt();
        int newYear = year + 1;

        while (true) {
            String yearString = Integer.toString(newYear);
            if(yearString.chars().distinct().count() == yearString.length()) {
                break;
            }
            newYear++;
        }
        System.out.println(newYear);

        sc.close();
    }
}