package problemsolving;

import java.util.*;

public class presents {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int k = sc.nextInt();

        int gifts [] = new int [k];

        for(int i=0; i<k; i++) {
            int giftNo = sc.nextInt();
            gifts[giftNo - 1] = i+1;
        }

        for(int i=0; i<gifts.length; i++) {
            int a = gifts[i];
            System.out.println(a);
        }

        sc.close();
    }
}
