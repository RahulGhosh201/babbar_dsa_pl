#include <bits/stdc++.h>
using namespace std;

void inversions(int arr[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                cnt++;
            }
        }
    }
    cout << "Ans: " << cnt << endl;
}

int main()
{
    int arr[] = {8, 4, 2, 1}, n = 4;
    inversions(arr, n);
}