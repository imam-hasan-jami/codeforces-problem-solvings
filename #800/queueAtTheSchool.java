package problemsolving;

import java.util.*;

public class queueAtTheSchool {
    @SuppressWarnings("unused")
     public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int t = sc.nextInt();
        String str = sc.next();

        for(int i=0; i < t; i++) {
            str = str.replace("BG", "GB");
        }

        System.out.println(str);
        
        sc.close();
     }
}