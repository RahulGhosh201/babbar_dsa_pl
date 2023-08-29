// ip:
// arr1[]={1,2,4,6,9,15};
// arr2[]={3,5,7,11};
// op:
// arr3[]={1,2,3,4,5,6,7,11,15};

#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int b[], int m, int n)
{
    int res[m + n], k = 0, i = 0, j = 0;

    while (i < m && j < n)
    {
        if (a[i] <= b[j])
        {
            res[k++] = a[i];
            i++;
        }
        else
        {
            res[k++] = b[j];
            j++;
        }
    }
    while (i < m)
    {
        res[k++] = a[i];
        i++;
    }
    while (j < n)
    {
        res[k++] = b[j];
        j++;
    }
    cout << "Ans: ";
    for (int x = 0; x < k; x++)
    {
        cout << res[x] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[] = {1, 2, 4, 6, 9, 15}, arr2[] = {3, 5, 7, 11}, n1 = 6, n2 = 4;
    merge(arr1, arr2, n1, n2);
    return 0;
}