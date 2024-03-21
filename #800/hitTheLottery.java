import java.util.*;
public class Main
{
public static void main(String[] ar)
{
Scanner s=new Scanner(System.in);
int c=0;
int n=s.nextInt();
s.nextLine();
c=n/100+n%100/20+n%20/10+n%10/5+n%5;
System.out.println(c);
}
}