package problemsolving;

import java.util.*;

public class inSearchOfAnEasyProblem {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int counter = 0;
        int comment [] = new int [n];

        for(int i=0; i<n; i++) {
            comment[i] = sc.nextInt();
        }

        for(int i=0; i<n; i++) {
            if(comment[i] == 1) {
                counter++;
            }
        }

        if(counter == 0) {
            System.out.println("EASY");
        } else {
            System.out.println("HARD");
        }

        sc.close();
    }
}
