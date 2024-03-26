package problemsolving;

import java.util.*;

public class sumOfRoundNumbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            int x = 0, y = 1;
            String result = "";

            while (n != 0) {
                if (n % 10 != 0) {
                    x++;
                    result = result + (n % 10) * y + " ";
                }
                y = y * 10;
                n = n / 10;
            }
            System.out.println(x);
            System.out.println(result);
        }
        sc.close();
    }
}
