// A
// B C
// D E F
// G H I J

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4;
    char temp = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << (char)temp++ << " ";
        }
        cout << endl;
    }
}