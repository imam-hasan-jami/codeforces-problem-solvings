package problemsolving;

import java.util.*;

public class soldierAndBananas {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int k = sc.nextInt();
        int n = sc.nextInt();
        int w = sc.nextInt();

        int totalCost = 0;

        for(int i=1; i<=w; i++) {
            totalCost += i*k;
        }

        if((totalCost - n) < 0) {
            System.out.println(0);
        } else {
            System.out.println(totalCost - n);
        }

        sc.close();
    }
}
