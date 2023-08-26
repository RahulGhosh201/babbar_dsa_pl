// 1 1 1
// 2 2 2
// 3 3 3

#include <bits/stdc++.h>
using namespace std;

void p2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 3;
    p2(n);
    return 0;
}