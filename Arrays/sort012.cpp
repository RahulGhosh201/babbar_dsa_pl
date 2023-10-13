#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void ans(int arr[], int n)
{
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        else if (arr[i] == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    int temp[n], k = 0;
    for (int i = 0; i < count0; i++)
    {
        temp[k++] = 0;
    }
    for (int i = count0; i < count0 + count1; i++)
    {
        temp[k++] = 1;
    }
    for (int i = count1 + count0; i < count0 + count1 + count2; i++)
    {
        temp[k++] = 2;
    }
    cout << "After sorting: " << endl;
    printArr(temp, n);
}

int main()
{
    int arr[] = {0, 1, 2, 1, 2, 0, 1, 1, 0, 2, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before sorting: " << endl;
    printArr(arr, n);
    ans(arr, n);

    return 0;
}