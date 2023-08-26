// ****
// ***
// **
// *
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    int temp = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < temp; j++)
        {
            cout << "*";
        }
        cout << endl;
        temp--;
    }
}