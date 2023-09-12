#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> findPairs(int arr1[], int arr2[], int x, int m, int n)
{
    vector<pair<int, int>> ans;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((arr1[i] + arr2[j]) == x)
            {
                ans.push_back(make_pair(arr1[i], arr2[j]));
            }
        }
    }
    return ans;
}

int main()
{
    int arr1[] = {-1, -2, 4, -6, 5, 7}, arr2[] = {6, 3, 4, 0}, x = 8, m = 6, n = 4;
    vector<pair<int, int>> ans = findPairs(arr1, arr2, x, m, n);
    cout << "Pairs: " << endl;
    for (auto it : ans)
    {
        cout << it.first << " " << it.second << endl;
    }
}