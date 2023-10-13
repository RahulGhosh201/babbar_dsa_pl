#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 5, 7, -1, 5}, k = 6, count = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                count++;
            }
        }
    }
    cout << "Ans: " << count << endl;
}