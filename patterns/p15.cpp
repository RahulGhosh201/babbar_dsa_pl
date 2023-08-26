// A
// B C
// C D E
// D E F G

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            char temp = 'A' + i + j - 2;
            cout << (char)(temp) << " ";
        }
        cout << endl;
    }
}