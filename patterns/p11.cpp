// A A A
// B B B
// C C C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    char temp = 'A';
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << temp << " ";
        }
        cout << endl;
        temp++;
    }
}