import java.util.*;

public class power {
    public static int pow(int n) {
        if (n == 0) {
            return 1;
        }
        return (2 * pow(n - 1));
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int ans = power.pow(n);
        System.out.println("2**" + n + " = " + ans);
    }
}
