// * * * *
// * * * *
// * * * *
// * * * *

// In case of a pattern problem the outer loop maintains all the columns and
// the inner loop maintains the rows.

#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 4;
    pattern(n);
    return 0;
}