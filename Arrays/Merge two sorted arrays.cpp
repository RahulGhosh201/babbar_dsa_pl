#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int b[], int m, int n)
{
    int c[m + n], k = 0, i = 0, j = 0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }

    while (i < m)
    {
        c[k++] = a[i++];
    }

    while (j < n)
    {
        c[k++] = b[j++];
    }

    cout << "Ans: ";
    for (int i = 0; i < k; i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[] = {1, 3, 4, 5}, b[] = {2, 4, 6, 8};
    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);
    merge(a, b, m, n);
    return 0;
}