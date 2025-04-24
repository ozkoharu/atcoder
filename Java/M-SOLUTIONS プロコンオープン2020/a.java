import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner stdIn = new Scanner(System.in);
        int n = stdIn.nextInt();

        if (400 <= n && 599 >= n) {
            System.out.println(8);
        }
        if (600 <= n && 799 >= n) {
            System.out.println(7);
        }
        if (800 <= n && 999 >= n) {
            System.out.println(6);
        }
        if (1000 <= n && 1199 >= n) {
            System.out.println(5);
        }
        if (1200 <= n && 1399 >= n) {
            System.out.println(4);
        }
        if (1400 <= n && 1599 >= n) {
            System.out.println(3);
        }
        if (1600 <= n && 1799 >= n) {
            System.out.println(2);
        }
        if (1800 <= n && 1999 >= n) {
            System.out.println(1);
        }
    }
}
