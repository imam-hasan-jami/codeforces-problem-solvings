import java.util.Scanner;
 
public class solving {
 
 
	public static void main(String[] args) {
		
		Scanner in = new Scanner(System.in);
		
		int n = in.nextInt();
		int arr[] = new int[n];
					
		for (int i = 0; i < arr.length; i++) {
			arr[i] = in.nextInt();
		}
		int max = 0, min = 0;
		
		for (int i = 1; i < arr.length; i++) {
			if(arr[i] > arr[max])
				max = i;
			if(arr[i] <= arr[min])
				min = i;
		}
				
		if (max < min)
			System.out.println(max - 1 + (n - min));
		else
			System.out.println(max - 1 + (n - min - 1));
		
		in.close();
	}
}