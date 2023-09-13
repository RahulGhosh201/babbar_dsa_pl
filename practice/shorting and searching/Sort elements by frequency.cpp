#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> &a,
         pair<string, int> &b)
{
    return a.second < b.second;
}

void sorting(int arr[], int n)
{
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    vector<pair<int, int>> A;
    for (auto &it : m)
    {
        A.push_back(it);
    }
    sort(A.begin(), A.end(), cmp);
    for (auto &it : A)
    {
        cout << it.first << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {2, 5, 2, 8, 5, 6, 8, 8}, n = 8;
    sorting(arr, n);
    return 0;
}