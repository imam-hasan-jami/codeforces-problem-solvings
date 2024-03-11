package problemsolving;

import java.util.*;

public class georgeAndAccommodation {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int counter = 0;

        for(int i=0; i<n; i++) {
            int p = sc.nextInt();
            int q = sc.nextInt();

            if((q-p) >= 2) {
                counter++;
            }
        }
        System.out.println(counter);

        sc.close();
    }
}
