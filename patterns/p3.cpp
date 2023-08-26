// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

#include <bits/stdc++.h>
using namespace std;

void p3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 4;
    p3(n);
    return 0;
}