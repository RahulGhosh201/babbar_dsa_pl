// Binary searched can be done only on monotonic elements of an array
// meaning it can be done only  on a sorted array which is either on decreasing order or
// non decreasing order.

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    while (start <= mid)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 5, 8, 9}, n = 6, key = 5;
    int ans = binarySearch(arr, n, key);
    if (ans >= 0)
    {
        cout << key << " is found at index: " << ans << endl;
    }
    else
    {
        cout << key << " is not found in the array." << endl;
    }
}