#include <bits/stdc++.h>
using namespace std;

int equilibrium(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int sum1 = 0, sum2 = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            sum1 += arr[j];
        }
        for (int k = i + 1; k < n; k++)
        {
            sum2 += arr[k];
        }
        if (sum1 == sum2)
        {
            return arr[i];
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1, 4, 2, 5, 0};
    int n = 5;
    int ans = equilibrium(arr, n);
    cout << "Ans: " << ans << endl;
}