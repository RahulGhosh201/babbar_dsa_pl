#include <bits/stdc++.h>
using namespace std;

void median(int arr1[], int arr2[], int n)
{
    int arr3[n + n];
    int a = 0, b = 0, c = 0;
    while (a < n && b < n)
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
    while (a < n)
    {
        arr3[c++] = arr1[a++];
    }
    while (b < n)
    {
        arr3[c++] = arr2[b++];
    }
    int pos = 0;
    if (c % 2 == 0)
    {
        pos = c / 2;
    }
    int ans = (arr3[pos - 1] + arr3[pos]) / 2;
    cout << "Ans: " << ans << endl;
    for (int i = 0; i < c; i++)
    {
        cout << arr3[i] << " ";
    }
}

int main()
{
    int arr1[] = {1, 12, 15, 26, 38}, arr2[] = {2, 13, 17, 30, 45};
    int n = 5;
    median(arr1, arr2, n);
}