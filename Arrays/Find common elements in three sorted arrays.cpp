#include <bits/stdc++.h>
using namespace std;

void common(int a[], int b[], int c[], int m, int n, int o)
{
    vector<int> v;
    v.push_back(m);
    v.push_back(n);
    v.push_back(o);
    int maxi = *max_element(v.begin(), v.end());
    int ans[maxi], res[maxi], q = 0, x = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {
                ans[q++] = a[i];
            }
        }
    }
    for (int i = 0; i < o; i++)
    {
        for (int j = 0; j < q; j++)
        {
            if (c[i] == ans[j])
            {
                res[x++] = c[i];
            }
        }
    }

    cout << "Ans: ";
    for (int i = 0; i < x; i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
}

int main()
{
    int ar1[] = {1, 5, 10, 20, 40, 80},
        ar2[] = {6, 7, 20, 80, 100},
        ar3[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int m = sizeof(ar1) / sizeof(ar1[0]);
    int n = sizeof(ar2) / sizeof(ar2[0]);
    int o = sizeof(ar3) / sizeof(ar3[0]);
    common(ar1, ar2, ar3, m, n, o);
    return 0;
}