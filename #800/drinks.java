package problemsolving;

import java.util.*;

public class drinks {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int k = sc.nextInt();
        double vol = 0;

        for(int i=0; i<k; i++) {
            vol = vol + sc.nextInt();
        }

        System.out.println(vol/k);

        sc.close();
    }
}
