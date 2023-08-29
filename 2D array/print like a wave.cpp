#include <bits/stdc++.h>
using namespace std;

void wave(int arr[][3])
{
    cout << "2D array in wave:" << endl;
    for (int i = 0; i < 3; i++)
    {
        if (i & 1)
        {
            // odd index meaning bottom to top
            for (int row = 2; row >= 0; row--)
            {
                cout << arr[row][i] << " ";
            }
        }
        else
        {
            // 0 or even index meaning top to bottom
            for (int row = 0; row < 3; row++)
            {
                cout << arr[row][i] << " ";
            }
        }
    }
    cout << endl;
}

int main()
{
    int arr[3][3];
    cout << "Enter elements in the array: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "2D array:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    wave(arr);
    return 0;
}