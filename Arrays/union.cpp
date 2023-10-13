#include <bits/stdc++.h>
using namespace std;

void unionAns(int arr1[], int arr2[], int n1, int n2)
{
    set<int> s;
    for (int i = 0; i < n1; i++)
    {
        s.insert(arr1[i]);
    }
    for (int i = 0; i < n2; i++)
    {
        s.insert(arr2[i]);
    }
    for (auto it : s)
    {
        cout << it << " ";
    }
    cout << endl;
}

// void intersection(int arr1[], int arr2[], int n1, int n2)
// {
// }

int main()
{
    int arr1[] = {1, 2, 5, 6, 2, 3, 5, 7, 3}, arr2[] = {2, 4, 5, 6, 8, 9, 4, 6, 5, 4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    unionAns(arr1, arr2, n1, n2);
    // intersection(arr1, arr2, n1, n2);
    return 0;
}