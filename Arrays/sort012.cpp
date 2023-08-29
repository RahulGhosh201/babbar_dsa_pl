// ip: 0,1,0,2,1,0,1,2
// op: 0,0,0,1,1,1,2,2

#include <bits/stdc++.h>
using namespace std;

void sort012(int arr[], int n)
{
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        if (arr[i] == 1)
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
    for (int i = 0; i < count1; i++)
    {
        temp[k++] = 1;
    }
    for (int i = 0; i < count2; i++)
    {
        temp[k++] = 2;
    }
    cout << "Ans: ";
    for (int i = 0; i < k; i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {0, 1, 0, 2, 1, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort012(arr, n);
    return 0;
}