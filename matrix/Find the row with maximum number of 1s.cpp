#include <bits/stdc++.h>
using namespace std;

void max1(int arr[][4])
{
    int maxi = INT_MIN, ans = 0;
    for (int i = 0; i < 4; i++)
    {
        int count1 = 0;
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == 1)
            {
                count1++;
            }
        }
        if (count1 > maxi)
        {

            maxi = count1;
            ans = i;
        }
    }
    cout << "Ans: " << ans << endl;
}

int main()
{
    int arr[4][4] = {{0, 1, 1, 1},
                     {1, 1, 1, 1},
                     {0, 0, 1, 1},
                     {0, 0, 0, 0}};
    max1(arr);
}