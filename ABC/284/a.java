import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner stdIn = new Scanner(System.in);
        int n = stdIn.nextInt();
        String[] temp = new String[n];

        for (int i = 0; i < n; i++) {
            String s = stdIn.next();
            temp[i] = s;
        }

        for (int i = 0; i < n; i++) {
            System.out.println(temp[n - i - 1]);
        }
    }
}
