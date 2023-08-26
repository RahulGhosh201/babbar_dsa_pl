// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5, temp = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < temp; j++)
        {
            cout << temp << " ";
        }
        cout << endl;
        temp++;
    }
    return 0;
}