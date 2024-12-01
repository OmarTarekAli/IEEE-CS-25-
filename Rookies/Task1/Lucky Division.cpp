import java.util.Scanner;

public class AlmostLuckyNumber {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.close();

        boolean isAlmostLucky = false;

        for (int i = 1; i <= n; i++) {
            if (isLucky(i) && n % i == 0) {
                isAlmostLucky = true;
                break;
            }
        }

        System.out.println(isAlmostLucky ? "YES" : "NO");
    }

    private static boolean isLucky(int number) {
        while (number > 0) {
            int digit = number % 10;
            if (digit != 4 && digit != 7) {
                return false;
            }
            number /= 10;
        }
        return true;
    }
}
