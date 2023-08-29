// ip: 3,4,5,1,2
// op: true

#include <bits/stdc++.h>
using namespace std;

int check(int arr[], int n)
{
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            count++;
        }
    }
    if (arr[n - 1] > arr[0])
    {
        count++;
    }

    return count <= 1;
}

int main()
{
    int arr[] = {3, 4, 5, 1, 2}, n = 5;
    int ans = check(arr, n);
    if (ans <= 1)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}