#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 4, 6, 3, 7, 8}, n = 8;
    int ans = 0, sum1 = 0, sum2 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum1 += arr[i];
    }
    sum2 = (n * (n + 1)) / 2;
    ans = sum2 - sum1;
    cout << "Ans: " << ans << endl;
}