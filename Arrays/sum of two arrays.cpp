#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4}, b[] = {4, 5}, m = 4, n = 2;
    int as = 0, bs = 0;
    for (int i = 0; i < m; i++)
    {
        as = (10 * as) + a[i];
    }
    for (int i = 0; i < n; i++)
    {
        bs = (10 * bs) + b[i];
    }
    cout << "Sum: " << (as + bs) << endl;
}