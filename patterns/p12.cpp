// A B C
// A B C
// A B C

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        char temp = 'A';
        for (int j = 0; j < n; j++)
        {
            cout << temp++ << " ";
        }
        cout << endl;
    }
}