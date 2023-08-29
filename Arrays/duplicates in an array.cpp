// ip: 1,2,3,4,4
// op: 4

#include <bits/stdc++.h>
using namespace std;

void duplicates(int arr[], int n)
{
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    for (auto it : m)
    {
        if (it.second == 2)
        {
            cout << "Ans: " << it.first << endl;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    duplicates(arr, n);
    return 0;
}