// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5, j = 1, temp = 1;
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < j; k++)
        {
            cout << temp++ << " ";
        }
        cout << endl;
        j++;
    }
    return 0;
}