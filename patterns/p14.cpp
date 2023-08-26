// A
// B B
// C C C
// D D D D

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            char temp = 'A' + i - 1;
            cout << (char)(temp) << " ";
        }
        cout << endl;
    }
}