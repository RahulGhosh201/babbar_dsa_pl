#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void ans(int arr[], int n)
{
    int temp[n];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            temp[k++] = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            temp[k++] = arr[i];
        }
    }
    cout << "After sorting: " << endl;
    printArr(temp, n);
}

int main()
{
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before sorting: " << endl;
    printArr(arr, n);
    ans(arr, n);
    return 0;
}