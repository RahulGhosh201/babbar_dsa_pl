#include <bits/stdc++.h>
using namespace std;

// void duplicate(int arr[], int n)
// {
//     set<int> s;
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 s.insert(arr[i]);
//             }
//         }
//     }
//     cout << "Ans: ";
//     for (auto it : s)
//     {
//         cout << it << " ";
//     }
//     cout << endl;
// }

void duplicate(int arr[], int n)
{
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }

    vector<int> v;

    for (auto it : m)
    {
        if (it.second == 2)
        {
            v.push_back(it.first);
        }
    }

    cout << "Ans: ";
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 6, 3, 6, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    duplicate(arr, n);
    return 0;
}