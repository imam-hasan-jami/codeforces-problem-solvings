package problemsolving;

import java.util.*;

public class bitPlusPlus {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num_of_cases = sc.nextInt();
        int x = 0;

        // for(int i = 0; i < num_of_cases; i++) {
        //     String statement = sc.nextLine();
        //     switch(statement) {
        //         case "X++":
        //         case "++X":
        //             x++;
        //             break;
        //         case "X--":
        //         case "--X":
        //             x--;
        //             break;
        //     }
        // }

        while(num_of_cases-- > 0) {
            String statement = sc.next();
            if(statement.equals("X++") || statement.equals("++X")) {
                x++;
            } else if(statement.equals("X--") || statement.equals("--X")) {
                x--;
            }
        }

        System.out.println(x);
        sc.close();
    }
}