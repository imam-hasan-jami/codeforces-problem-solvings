package problemsolving;

import java.util.*;

public class specialCharacters {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        while(n-- > 0) {
            int x = sc.nextInt();
            if(x % 2 != 0) {
                System.out.println("NO");
            } else {
                System.out.println("YES");
                int z = x /2;
                while(z-- > 0) {
                    System.out.print("AAB");
                }
                System.out.println();
            }
        }
        sc.close();
    }
}