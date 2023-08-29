// ip: 2 - 3 3 3 - 2
// op: -2 2
//     -3 3

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> PairSum(int arr[], int n, int target)
{
    vector<vector<int>> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                vector<int> ans;
                ans.push_back(min(arr[i], arr[j]));
                ans.push_back(max(arr[i], arr[j]));
                v.push_back(ans);
            }
        }
    }
    sort(v.begin(), v.end());
    return v;
}

int main()
{
    int arr[] = {2, -3, 3, 3, -2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 0;
    vector<vector<int>> v = PairSum(arr, n, target);
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
    }
    cout << endl;
    return 0;
}