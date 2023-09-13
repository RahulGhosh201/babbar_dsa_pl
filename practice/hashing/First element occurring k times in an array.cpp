#include <bits/stdc++.h>
using namespace std;

int first(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == k)
        {
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 7, 4, 3, 4, 8, 7}, k = 2, n = 7;
    int ans = first(arr, n, k);
    cout << "First element occuring " << k << " times is " << ans << endl;
}