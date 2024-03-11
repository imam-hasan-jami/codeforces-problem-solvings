package problemsolving;

import java.util.*;

public class rudolfAndTheTicket {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        for(int z=0; z<n; z++) {

            int b = sc.nextInt();
            int c = sc.nextInt();
            int k = sc.nextInt();

            int counter = 0;

            int arrB[] = new int[b];
            int arrC[] = new int[c];

            for(int x=0; x<arrB.length; x++) {
                arrB[x] = sc.nextInt();
            }

            for(int y=0; y<arrC.length; y++) {
                arrC[y] = sc.nextInt();
            }

            for(int i=0; i<arrB.length; i++) {
                for(int j=0; j<arrC.length; j++) {
                    if(arrB[i] + arrC[j] <= k) {
                        counter++;
                    }
                }
            }
            System.out.println(counter);
        }
        sc.close();
    }
}
