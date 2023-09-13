#include <bits/stdc++.h>
using namespace std;

long long countPairs(long long x[], long long y[], long long m, long long n)
{
    long long ans = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (pow(x[i], y[j]) > pow(y[j], x[i]))
            {
                ans++;
            }
        }
    }
    return ans;
}

int main()
{
    long long x[] = {2, 1, 6}, y[] = {1, 5}, m = 3, n = 2;
    long long ans = countPairs(x, y, m, n);
    cout << "No of pairs: " << ans << endl;
}