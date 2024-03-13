package problemsolving;

import java.util.*;

public class magnets {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int k = sc.nextInt();
        int a;
        int b = 0, counter = 0;

        for(int i=0; i<k; i++) {
            a = sc.nextInt();

            if(a != b) {
                counter++;
            }
            b = a;
        }
        System.out.println(counter);

        sc.close();
    }
}