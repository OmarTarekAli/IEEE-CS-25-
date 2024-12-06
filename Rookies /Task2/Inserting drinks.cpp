import java.util.Arrays;
import java.util.Scanner;

public class PriceChecker {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int[] p = new int[n];
        
        for (int i = 0; i < n; i++) {
            p[i] = sc.nextInt();
        }
        
        Arrays.sort(p);
        
        int m = sc.nextInt();
        
        for (int j = 0; j < m; j++) {
            int b = sc.nextInt();
            System.out.println(upperBoundry(p, b));
        }
        
        sc.close();
    }
    
    private static int upperBoundry(int[] p, int b) {
        int l = 0, r = p.length;
        while (l < r) {
            int midlle = l + (r - l) / 2;
            if (p[midlle] <= b) l = midlle + 1;
            else r = midlle;
        }
        return l;
    }
}
