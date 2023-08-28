// 27->5
// 8->2
// 25->5

#include <bits/stdc++.h>
using namespace std;

long long int binarySearch(int n)
{
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2, ans = -1;
    while (s <= e)
    {
        long long int sqrt = mid * mid;
        if (sqrt == n)
        {
            return mid;
        }
        if (sqrt < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int n = 25;
    int ans = binarySearch(n);
    cout << "Ans: " << ans << endl;
    return 0;
}