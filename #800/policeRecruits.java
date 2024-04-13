package problemsolving;

import java.util.*;

public class policeRecruits {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int events = sc.nextInt();
        int arr[] = new int[events];
        for(int i=0; i<arr.length; i++) {
            arr[i] = sc.nextInt();
        }

        int count = 0, sum = 0;

        for(int i=0; i<arr.length; i++) {
            sum = sum + arr[i];
            if(sum < 0) {
                count++;
                sum = 0;    //reset
            }
        }
        System.out.println(count);
        sc.close();
    }
}
