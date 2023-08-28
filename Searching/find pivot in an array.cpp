// ip:8,10,17,1,3
// op:1

#include <bits/stdc++.h>
using namespace std;

void pivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    cout << "Pivot: " << arr[s] << endl;
}

int main()
{
    int arr[] = {8, 10, 17, 1, 3}, n = 5;
    pivot(arr, n);
    return 0;
}