#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int n, int key)
{
    int s = 0, e = n - 1;

    // int mid = (s + e) / 2;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key < arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        // mid = s + (e - s) / 2;
        // mid = (s + e) / 2;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int key = 4;
    int ans = binary_search(arr, 6, key);
    if (ans > 0)
    {
        cout << "Index: " << ans << endl;
    }
    else
    {
        cout << key << " is not found" << endl;
    }
}