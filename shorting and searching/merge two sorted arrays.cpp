#include <bits/stdc++.h>
using namespace std;

void merge(int arr1[], int arr2[], int m, int n)
{
    int arr3[m + n];
    int a = 0, b = 0, c = 0;
    while (a < m && b < n)
    {
        if (arr1[a] <= arr2[b])
        {
            arr3[c++] = arr1[a++];
        }
        else
        {
            arr3[c++] = arr2[b++];
        }
    }
    while (a < m)
    {
        arr3[c++] = arr1[a++];
    }
    while (b < n)
    {
        arr3[c++] = arr2[b++];
    }

    cout << "Ans: ";
    for (int i = 0; i < c; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[] = {1, 3, 4, 5}, arr2[] = {2, 4, 6, 8}, m = 4, n = 4;
    merge(arr1, arr2, m, n);
}