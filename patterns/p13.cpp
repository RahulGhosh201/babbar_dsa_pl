// A B C
// D E F
// G H I

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3, temp = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << (char)(temp++) << " ";
        }
        cout << endl;
    }
}