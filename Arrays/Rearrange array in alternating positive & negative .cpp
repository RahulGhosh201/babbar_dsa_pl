#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
    int t1[n], t2[n], ans[n], a = 0, b = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            t1[a++] = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            t2[b++] = arr[i];
        }
    }

    int i = 0;
    while (i < a && i < b)
    {
        ans[i++] = t1[a++];
        ans[i++] = t2[b++];
    }

    while (i < a)
    {
        ans[i++] = t1[a++];
    }
    while (i < b)
    {
        ans[i++] = t2[b++];
    }

    cout << "Ans: ";
    for (int x = 0; x < i; x++)
    {
        cout << ans[x] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, -4, -1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    return 0;
}