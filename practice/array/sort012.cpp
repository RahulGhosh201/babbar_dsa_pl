#include <bits/stdc++.h>
using namespace std;

void sorting(int arr[], int n)
{
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    int ans[n];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cnt0++;
        }
        if (arr[i] == 1)
        {
            cnt1++;
        }
        if (arr[i] == 2)
        {
            cnt2++;
        }
    }
    int k = 0;
    while (cnt0 > 0)
    {
        ans[k] = 0;
        k++;
        cnt0--;
    }
    while (cnt1 > 0)
    {
        ans[k] = 1;
        k++;
        cnt1--;
    }
    while (cnt2 > 0)
    {
        ans[k] = 2;
        k++;
        cnt2--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    sorting(arr, n);
}