
// package patterns.recursion.day2;
import java.util.*;

public class binarySearch {
    public static void main(String[] args) {
        System.out.println("Enter no of elements in the array: ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enetr elements of the array: ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("Enter the key: ");
        int key = sc.nextInt();
        int ans = findKey(arr, 0, n, key);
        if (ans < 0) {
            System.out.println(key + " is not found");
        } else {
            System.out.println(key + " is found at index " + (ans + 1));
        }
    }

    public static int findKey(int arr[], int m, int n, int key) {
        int s = m, e = n - 1;
        if (s > e) {
            return -1;
        }
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key) {
            return findKey(arr, mid + 1, e, key);
        } else {
            return findKey(arr, s, mid - 1, key);
        }
    }
}
