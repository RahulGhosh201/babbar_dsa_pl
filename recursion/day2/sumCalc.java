
// package patterns.recursion.day2;
import java.util.*;

public class sumCalc {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter no of elements in the array: ");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter elements in the array: ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        int ans = sum(arr, n);
        System.out.println("Sum of the given array is: " + ans);
    }

    public static int sum(int arr[], int n) {
        int s = 0;
        for (int i = 0; i < n; i++) {
            s += arr[i];
        }
        return s;
    }
}
