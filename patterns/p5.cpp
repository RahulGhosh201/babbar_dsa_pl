// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25

#include <bits/stdc++.h>
using namespace std;

void p5(int n)
{
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << k++ << " ";
        }
        cout << endl;
    }
}

int mian()
{
    int n = 5;
    p5(n);
    return 0;
}