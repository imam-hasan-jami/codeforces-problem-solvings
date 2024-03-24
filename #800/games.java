package problemsolving;

import java.util.*;

public class games {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int a [] = new int [n];
        int b [] = new int [n];
        int counter = 0;

        for(int i=0; i<n; i++) {
            a[i] = sc.nextInt();
            b[i] = sc.nextInt();

            for(int j=0; j<i; j++) {
                if(a[i] == b[j]) {
                    counter++;
                }
                if(a[j] == b[i]) {
                    counter++;
                }
            }
        }
        System.out.println(counter);

        sc.close();
    }
}