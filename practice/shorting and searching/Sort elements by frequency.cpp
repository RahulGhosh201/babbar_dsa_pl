#include <bits/stdc++.h>
using namespace std;

void sorting(int arr[], int n)
{
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    for (auto it : m)
    {
    }
}

int main()
{
    int arr[] = {2, 5, 2, 8, 5, 6, 8, 8}, n = 8;
    sorting(arr, n);
    return 0;
}