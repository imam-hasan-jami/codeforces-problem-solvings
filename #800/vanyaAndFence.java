package problemsolving;

import java.util.*;

public class vanyaAndFence {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int h = sc.nextInt();

        int hx [] = new int [n];

        int sum = 0;

        for(int i=0; i<n; i++) {
            hx[i] = sc.nextInt();

            if(hx[i] <= h) {
                hx[i] = 1;
            } else if(hx[i] > h) {
                hx[i] = 2;
            }
        }

        for(int i=0; i<hx.length; i++) {
            sum = sum + hx[i];
        }

        System.out.println(sum);

        sc.close();
        
    }
}