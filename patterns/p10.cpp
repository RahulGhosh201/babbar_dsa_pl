// 1
// 2 1
// 3 2 1
// 4 3 2 1

#include <bits/stdc++.h>
using namespace std;

int mina()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        int j = 1;
        for (int k = j; k > 0; k--)
        {
            cout << k << " ";
        }
        cout << endl;
        j++;
    }
    return 0;
}