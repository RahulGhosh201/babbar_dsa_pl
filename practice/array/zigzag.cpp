#include <bits/stdc++.h>
using namespace std;

void zigzag(int arr[], int n)
{
    sort(arr, arr + n);
    for (int i = 1; i < n - 1; i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {4, 3, 7, 8, 6, 2, 1};
    int n = 7;
    zigzag(arr, n);
}