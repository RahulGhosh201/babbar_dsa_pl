#include <bits/stdc++.h>
using namespace std;

void sorting(int arr1[], int arr2[], int m, int n, int index)
{
    int arr3[m + n];
    int j = 0, k = 0, a = 0;
    while (k < m && a < n)
    {
        if (arr1[k] < arr2[a])
        {
            arr3[j++] = arr1[k++];
        }
        else
        {
            arr3[j++] = arr2[a++];
        }
    }
    while (k < m)
    {
        arr3[j++] = arr1[k++];
    }
    while (a < n)
    {
        arr3[j++] = arr2[a++];
    }
    cout << index << " th element of the array is: " << arr3[index - 1] << endl;
}

int main()
{
    int arr1[] = {2, 3, 6, 7, 9};
    int arr2[] = {1, 4, 8, 10};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    int k = 5;
    sorting(arr1, arr2, m, n, k);
}
