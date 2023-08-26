// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1

#include <bits/stdc++.h>
using namespace std;

void p3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j >= 1; j--)
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