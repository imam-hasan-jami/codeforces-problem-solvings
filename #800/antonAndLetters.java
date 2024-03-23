import java.util.*;
public class Main
{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String s=sc.nextLine();
		HashSet<Character> hs=new HashSet<>();
		for(int i=0;i<s.length();i++) {
		    int x=s.charAt(i);
		    if(x>=97 && x<=122)
		    hs.add((char)x);
		}
		System.out.println(hs.size());
	}
}