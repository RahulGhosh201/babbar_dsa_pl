#include <bits/stdc++.h>
using namespace std;

int countDistinctWayToClimbStairs(long long nStairs)
{
    if (nStairs < 0)
    {
        return 0;
    }
    if (nStairs == 0)
    {
        return 1;
    }
    int ans = countDistinctWayToClimbStairs(nStairs - 1) + countDistinctWayToClimbStairs(nStairs - 2);
    return ans;
}

int main()
{
    int n = 0;
    cout << "Enter number of stairs: " << endl;
    cin >> n;
    int ans = countDistinctWayToClimbStairs(n);
    cout << "Number of ways to climb " << n << " stairs are " << ans << endl;
}