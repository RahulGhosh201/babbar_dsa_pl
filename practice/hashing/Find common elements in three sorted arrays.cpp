#include <bits/stdc++.h>
using namespace std;

void common(int a1[], int a2[], int a3[], int a, int b, int c)
{
    vector<int> ans;
    int a4[10], d = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (a1[i] == a2[j])
            {
                a4[d++] = a1[i];
            }
        }
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < d; j++)
        {
            if (a3[i] == a4[j])
            {
                ans.push_back(a4[j]);
            }
        }
    }
    cout << "Common elements are: ";
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    int ar1[] = {1, 5, 10, 20, 40, 80}, ar2[] = {6, 7, 20, 80, 100}, ar3[] = {3, 4, 15, 20, 30, 70, 80, 120}, a = 6, b = 5, c = 8;
    common(ar1, ar2, ar3, a, b, c);
}