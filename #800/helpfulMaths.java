package problemsolving;

import java.util.*;

public class helpfulMaths {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String numbers = sc.nextLine();
        String parts [] = numbers.split("\\+");
        Arrays.sort(parts);
        String finalNumber = String.join("+", parts);
        System.out.println(finalNumber);

        sc.close();
    }
}
