//  ip:0,1,0,3,12,0
//  op:1,3,12,0,0,0

#include <bits/stdc++.h>
using namespace std;

void moveZeroes(int arr[], int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[k++] = arr[i];
        }
    }
    for (int i = k; i < n; i++)
    {
        arr[k++] = 0;
    }
    cout << "Ans: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {0, 1, 0, 3, 12, 0}, n = 6;
    moveZeroes(arr, n);
    return 0;
}