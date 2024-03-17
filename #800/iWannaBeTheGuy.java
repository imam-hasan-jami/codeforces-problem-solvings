package problemsolving;

import java.util.*;

public class iWannaBeTheGuy {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // Input
        int n = scanner.nextInt();
        boolean[] levels = new boolean[n]; // Array to mark the levels
        int p = scanner.nextInt(); // Number of levels Little X can pass
        for (int i = 0; i < p; i++) {
            int level = scanner.nextInt();
            levels[level - 1] = true; // Mark the level as passable by Little X
        }
        int q = scanner.nextInt(); // Number of levels Little Y can pass
        for (int i = 0; i < q; i++) {
            int level = scanner.nextInt();
            levels[level - 1] = true; // Mark the level as passable by Little Y
        }
        
        // Processing
        boolean canPassAllLevels = true;
        for (boolean level : levels) {
            if (!level) { // If any level is not passable by either Little X or Little Y
                canPassAllLevels = false;
                break;
            }
        }
        
        // Output
        if (canPassAllLevels) {
            System.out.println("I become the guy.");
        } else {
            System.out.println("Oh, my keyboard!");
        }
        
        scanner.close();
    }
}
