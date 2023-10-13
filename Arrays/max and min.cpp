#include <bits/stdc++.h>
using namespace std;

void maxAndmin(int arr[], int n)
{
    int maxi = INT_MIN, mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (maxi < arr[i])
        {
            maxi = arr[i];
        }
        if (mini > arr[i])
        {
            mini = arr[i];
        }
    }

    cout << "Maximum element: " << maxi << endl;
    cout << "Minimum element: " << mini << endl;
}

int main()
{
    int arr[] = {1, 5, 10, 2, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    maxAndmin(arr, n);
    return 0;
}