// ip: 1, 2, 2, 2, 3, 4
//     2, 2, 3, 3
// op: 2,2,3

#include <bits/stdc++.h>
using namespace std;

void common(int a1[], int a2[], int n, int m)
{
    int i = 0, j = 0;
    vector<int> v;
    while (i < n && j < m)
    {
        if (a1[i] < a2[j])
        {
            i++;
        }
        if (a1[i] == a2[j])
        {
            v.push_back(a1[i]);
            i++;
            j++;
        }
        if (a1[i] > a2[j])
        {
            j++;
        }
    }

    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    int a1[] = {1, 2, 2, 2, 3, 4}, a2[] = {2, 2, 3, 3};
    int n1 = sizeof(a1) / sizeof(a1[0]), n2 = sizeof(a2) / sizeof(a2[0]);
    common(a1, a2, n1, n2);
    return 0;
}