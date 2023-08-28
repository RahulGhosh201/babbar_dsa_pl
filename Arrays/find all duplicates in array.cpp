// input : 4, 3, 2, 7, 8, 2, 3, 1
// output: 2,3

#include <bits/stdc++.h>
using namespace std;

void duplicates(int arr[], int n)
{
    vector<int> ans;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    for (auto it : m)
    {
        if (it.second == 2)
        {
            ans.push_back(it.first);
        }
    }
    cout << "Ans: ";
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {4, 3, 2, 7, 8, 2, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    duplicates(arr, n);
    return 0;
}