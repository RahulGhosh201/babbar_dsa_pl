#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void ans(int arr[], int n, int k)
{
    bubbleSort(arr, n);

    cout << k << "th smallest element: " << arr[k - 1] << endl;
    reverse(arr, arr + n);
    cout << k << "th largest element: " << arr[n - k - 1] << endl;
}

int main()
{
    int arr[] = {20, 1, 5, 6, 12, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    ans(arr, n, k);
    return 0;
}