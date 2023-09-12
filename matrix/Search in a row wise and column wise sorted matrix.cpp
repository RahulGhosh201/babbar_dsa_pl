#include <bits/stdc++.h>
using namespace std;

void searching(int arr[][4], int x)
{
    pair<int, int> p;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == x)
            {
                p.first = i;
                p.second = j;
                break;
            }
        }
    }
    cout << "Found at (" << p.first << "," << p.second << ")" << endl;
}

int main()
{
    int arr[4][4] = {{10, 20, 30, 40},
                     {15, 25, 35, 45},
                     {27, 29, 37, 48},
                     {32, 33, 39, 50}},
        x = 29;
    searching(arr, x);
}