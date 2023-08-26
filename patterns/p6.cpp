// *
// * *
// * * *
// * * * *
// * * * * *

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5, limit = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < limit; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
        limit++;
    }
}