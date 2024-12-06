import java.util.Scanner;

public class P {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        long d = s.nextLong(), ans = 0;
        long[] a = new long[n];
        for (int i = 0; i < n; i++) a[i] = s.nextLong();
        for (int i = 0, k = 0; i < n; i++) {
            while (k < n && a[k] - a[i] <= d) k++;
            long c = k - i - 1;
            if (c >= 2) ans += c * (c - 1) / 2;
        }
        System.out.println(ans);
    }
}
