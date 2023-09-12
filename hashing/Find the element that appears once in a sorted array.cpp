#include <bits/stdc++.h>
using namespace std;

int appearsOnce(int arr[], int n)
{
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    for (auto it : m)
    {
        if (it.second == 1)
        {
            return it.first;
        }
    }
}

int main()
{
    int arr[] = {1, 1, 3, 3, 4, 5, 5, 7, 7, 8, 8}, n = 11;
    int ans = appearsOnce(arr, n);
    cout << "The only element appears once is " << ans << endl;
}