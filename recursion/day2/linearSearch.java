
// package patterns.recursion.day2;
import java.util.*;

public class linearSearch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enetr number of elements in the array: ");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter elements in the array: ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("Enter the elements to find: ");
        int key = sc.nextInt();
        int ans = findKey(arr, n, key);
        if (ans == -1) {
            System.out.println(key + " is not found");
        } else {
            System.out.println(key + " is found at index " + ans);
        }
    }

    public static int findKey(int arr[], int n, int key) {
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == key) {
                return i;
            }
        }
        return -1;
    }
}
