// ip: 1,2,3,4,5  target: 9
// op: 2,3,4

#include <bits/stdc++.h>
using namespace std;

void tripleSum(int arr[], int n, int target)
{
    vector<vector<vector<int>>> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if ((arr[i] + arr[j] + arr[k]) == target)
                {
                    vector<int> v;
                    v.push_back(arr[i]);
                    v.push_back(arr[j]);
                    v.push_back(arr[k]);
                    ans.push_back(v);
                }
            }
        }
    }
    cout << "Ans: ";
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            for (int k = 0; k < ans[j][j].size(); k++)
            {
                cout << ans[i][j][k] << " ";
            }
        }
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5}, target = 9;
    int n = sizeof(arr) / sizeof(arr[0]);
    tripleSum(arr, n, target);
    return 0;
}