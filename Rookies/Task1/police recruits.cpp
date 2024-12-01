import java.util.Scanner;

public class UntreatedCrimes {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int officers = 0, untreated = 0;

        while (n-- > 0) {
            int event = sc.nextInt();
            if (event == -1) {
                untreated += (officers == 0) ? 1 : 0;
                officers = Math.max(0, officers - 1);
            } else {
                officers += event;
            }
        }

        System.out.println(untreated);
        sc.close();
    }
}
