#include <bits/stdc++.h>
using namespace std;

void intersection(int a[], int b[], int m, int n)
{
    set<int> s;
    for (int i = 0; i < m; i++)
    {
        s.insert(a[i]);
    }

    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (s.find(b[i]) != s.end())
        {
            ans.push_back(b[i]);
        }
    }
    cout << "Intersection of the two arrays are: ";
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    int a[] = {1, 5, 9, 10}, b[] = {1, 5};
    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);
    intersection(a, b, m, n);
    return 0;
}