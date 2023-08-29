#include <bits/stdc++.h>
using namespace std;

void rowSum(int arr[][4])
{
    int sum1 = 0, sum2 = 0, sum3 = 0, i = 0, j = 0;
    while (j != 4)
    {
        sum1 += arr[i][j];
        j++;
    }
    i = 1, j = 0;
    while (j != 4)
    {
        sum2 += arr[i][j];
        j++;
    }
    i = 2, j = 0;
    while (j != 4)
    {
        sum3 += arr[i][j];
        j++;
    }
    cout << "Sum of row1: " << sum1 << endl;
    cout << "Sum of row2: " << sum2 << endl;
    cout << "Sum of row3: " << sum3 << endl;
}

int main()
{
    int arr[3][4];
    cout << "Enter elements in the array: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "2D array:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    rowSum(arr);
    return 0;
}