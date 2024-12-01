import java.util.Scanner;

public class SoldierArrangement {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] h = new int[n];
        
        for (int i = 0; i < n; i++) {
            h[i] = sc.nextInt();
        }
        
        int maxIdx = 0, minIdx = 0;
        
        for (int i = 1; i < n; i++) {
            if (h[i] > h[maxIdx]) maxIdx = i;
            if (h[i] <= h[minIdx]) minIdx = i;
        }

        int moves = maxIdx + (n - 1 - minIdx);
        if (maxIdx > minIdx) moves--;
        
        System.out.println(moves);
        sc.close();
    }
}
