#include <bits/stdc++.h>
using namespace std;

void largestrowSum(int arr[][4])
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
    int maxi = INT_MIN;
    vector<int> v;
    v.push_back(sum1);
    v.push_back(sum2);
    v.push_back(sum3);
    for (auto it : v)
    {
        if (it > maxi)
        {
            maxi = it;
        }
    }
    cout << "largest row sum: " << maxi << endl;
    if (maxi == sum1)
    {
        cout << "It was first row" << endl;
    }
    else if (maxi == sum2)
    {
        cout << "It was second row" << endl;
    }
    else
    {
        cout << "It was third row" << endl;
    }
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
    largestrowSum(arr);
    return 0;
}