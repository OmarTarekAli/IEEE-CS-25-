import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String dir = sc.nextLine(), msg = sc.nextLine();
        String keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
        StringBuilder result = new StringBuilder();

        for (char c : msg.toCharArray()) 
            result.append(keyboard.charAt(keyboard.indexOf(c) + (dir.equals("R") ? -1 : 1)));

        System.out.println(result);
    }
}
