// ip: 1,2,3,4
// op:4,3,2,1

#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     int arr[] = {1, 2, 3, 4}, n = 4;
//     cout << "Before reversing: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     reverse(arr, arr + n);
//     cout << "After reversing: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

int main()
{
    int arr[] = {1, 2, 3, 4, 5}, n = 5;
    cout << "Before reversing: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    int a = 0, b = n - 1;
    for (int i = 0; i < n / 2; i++)
    {
        swap(arr[a++], arr[b--]);
    }

    cout << "After reversing: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
