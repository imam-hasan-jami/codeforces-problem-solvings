package problemsolving;

import java.util.*;

public class beautifulMatrix {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // char matrix[][] = new char[5][5];
        // for(int i=0; i<5; i++) {
        //     matrix [i] = sc.nextLine().replaceAll(" ", "").toCharArray();
        //     // for(int j=0; j<5; j++) {
        //     //     matrix [j] = sc.nextLine().toCharArray();
        //     // }
        // }

        // int R = -1;
        // int C = -1;

        // for(int i=0; i<5; i++) {
        //     for(int j=0; j<5; j++) {
        //         if(matrix[i][j] == '1') {
        //             R = i;
        //             C = j;
        //             break;
        //         }
        //     }
        // }

        // int moves = Math.abs(R - 2) + Math.abs(C - 2);
        // System.out.println(moves);

        for(int i=0; i<5; i++) 
            for(int j=0; j<5; j++) 
                if(sc.nextInt() == 1) 
                    System.out.println(Math.abs(i - 2) + Math.abs(j - 2));
                
            
        

        sc.close();
    }
}
