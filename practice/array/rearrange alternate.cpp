#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7, s = 0, e = n - 1, i = 0, k = 0;
    int ans[n];
    while (s <= e)
    {
        if (i % 2 == 0)
        {
            ans[k++] = arr[e--];
        }
        else
        {
            ans[k++] = arr[s++];
        }
        i++;
    }
    cout << "Ans: ";
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}