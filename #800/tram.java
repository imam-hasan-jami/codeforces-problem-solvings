package problemsolving;

import java.util.*;

public class tram {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int current = 0;
        int min = 0;

        for (int i = 0; i < n; i++) {
            int a = sc.nextInt();
            int b = sc.nextInt();

            current = current + (b - a);

            if (current > min) {
                min = current;
            }
        }
        System.out.println(min);

        sc.close();
    }
}