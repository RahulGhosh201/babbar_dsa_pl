// input: 3,2,5,3,2
// output: 5

#include <bits/stdc++.h>
using namespace std;

void once(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << "Ans: " << ans << endl;
}

int main()
{
    int arr[] = {3, 2, 5, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    once(arr, n);
    return 0;
}