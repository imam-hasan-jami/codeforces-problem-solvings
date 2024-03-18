
import java.util.Scanner;
 
public class MyClass {
 
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        in.nextInt();
        System.out.println(in.next().toLowerCase().chars().distinct().count() == 26? "YES":"NO");
    }
}