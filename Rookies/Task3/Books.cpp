import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt(), t = sc.nextInt();
        int[] books = new int[n];
        for (int i = 0; i < n; i++) books[i] = sc.nextInt();
        
        int max = 0, sum = 0, left = 0;
        
        for (int right = 0; right < n; right++) {
            sum += books[right];
            while (sum > t) sum -= books[left++];
            max = Math.max(max, right - left + 1);
        }
        
        System.out.println(max);
    }
}
