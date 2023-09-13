#include <bits/stdc++.h>
using namespace std;

// bool checking(int n, int k)
// {
//     int arr[10], j = 0;
//     while (n > 0)
//     {
//         int rem = n % 2;
//         arr[j++] = rem;
//         n = n / 2;
//     }
//     int size = sizeof(arr) / sizeof(arr[0]);
//     reverse(arr, arr + size);
//     if (arr[k] == 1)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

void checking(int n, int k)
{
    if (n & (1 << k))
        cout << "SET" << endl;
    else
        cout << "NOT SET" << endl;
}

int main()
{
    int n = 5, k = 1;
    // bool ans = checking(n, k);
    // if (ans == 1)
    // {
    //     cout << "SET" << endl;
    // }
    // else
    // {
    //     cout << "NOT SET" << endl;
    // }
    checking(n, k);
    return 0;
}