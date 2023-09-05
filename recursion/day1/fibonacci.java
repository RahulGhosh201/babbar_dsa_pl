
// package patterns.recursion.day1;
import java.util.*;

public class fibonacci {
    public static int fib(int n) {
        if (n <= 1) {
            return n;
        }
        return fib(n - 1) + fib(n - 2);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int ans = fibonacci.fib(n);
        System.out.println("Fibonacci of " + n + " is " + ans);
    }
}
