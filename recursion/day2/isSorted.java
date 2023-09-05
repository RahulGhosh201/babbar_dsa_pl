
// package patterns.recursion.day2;
import java.util.*;

public class isSorted {
    public static void main(String[] args) {
        int[] arr = { 2, 4, 15, 16, 15 };
        boolean ans = checkSorted(arr, 5);
        if (ans) {
            System.out.println("Array is sorted");
        } else {
            System.out.println("Array is not sorted");
        }
    }

    public static boolean checkSorted(int arr[], int n) {
        if (n <= 1)
            return true;
        return sortedHelper(arr, 1, n);
    }

    public static boolean sortedHelper(int arr[], int i, int size) {
        if (i == size) {
            return true;
        }
        if (arr[i - 1] > arr[i]) {
            return false;
        }
        return sortedHelper(arr, i + 1, size);
    }
}
