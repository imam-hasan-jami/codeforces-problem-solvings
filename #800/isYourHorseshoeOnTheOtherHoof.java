package problemsolving;

import java.util.*;

public class isYourHorseshoeOnTheOtherHoof {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int [] arr = new int [4];
        for(int i=0; i<4; i++) {
            arr[i] = sc.nextInt();
        }

        Arrays.sort(arr);

        int counter = 0;

        for(int i=0; i<3; i++) {
            if(arr[i] == arr[i+1]) {
                counter++;
            }
        }
        System.out.println(counter);

        sc.close();
    }
}