// 1
// 2 3
// 3 4 5
// 4 5 6 7

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5, j = 1;
    for (int i = 0; i < n; i++)
    {
        int temp = j;
        for (int k = 0; k < j; k++)
        {
            cout << temp << " ";
            temp++;
        }
        cout << endl;
        j++;
    }
}