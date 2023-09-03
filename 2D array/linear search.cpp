#include <bits/stdc++.h>
using namespace std;

bool searching(int arr[][4], int target)
{
    int index = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[3][4], target = 13;
    cout << "Enter elements in the array: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    int x = searching(arr, target);
    if (x == 1)
    {
        cout << target << " is found in the array" << endl;
    }
    else
    {
        cout << target << " is not found in the array" << endl;
    }
    return 0;
}