#include <bits/stdc++.h>
using namespace std;

// bool checking(int arr1[], int arr2[], int m, int n)
// {
//     if (m != n)
//     {
//         return false;
//     }
//     int count1[10] = {0}, count2[10] = {0};
//     for (int i = 0; i < m; i++)
//     {
//         count1[arr1[i]]++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         count2[arr2[i]]++;
//     }

//     for (int i = 0; i < 9; i++)
//     {
//         if (count1[i] != count2[i])
//         {
//             return false;
//         }
//     }
//     return true;
// }

bool checking(int arr1[], int arr2[], int m, int n)
{
    if (m != n)
    {
        return false;
    }
    sort(arr1, arr1 + m);
    sort(arr2, arr2 + n);
    for (int i = 0; i < m; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr1[] = {1, 2, 5, 4, 0}, arr2[] = {2, 4, 5, 0, 1};
    int n = 5, m = 5;
    bool ans = checking(arr1, arr2, m, n);
    if (ans == 1)
    {
        cout << "Both the arrays are same" << endl;
    }
    else
    {
        cout << "Both the arrays are different" << endl;
    }
}