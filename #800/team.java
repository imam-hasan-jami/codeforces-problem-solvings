package problemsolving;

import java.util.Scanner;

public class team {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int count = 0;

        for (int i = 0; i < n; i++) {
            int p = sc.nextInt();
            int q = sc.nextInt();
            int r = sc.nextInt();

            if ((p + q + r) >= 2) {
                count++;
            }
        }
        System.out.println(count);
    }
}