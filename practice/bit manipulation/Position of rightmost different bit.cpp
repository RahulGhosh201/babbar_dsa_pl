#include <bits/stdc++.h>
using namespace std;

// void different(int m, int n)
// {
//     int arr1[10], arr2[10], j = 0, k = 0, ans = 0;
//     while (m > 0)
//     {
//         int rem = m % 2;
//         arr1[j++] = rem;
//         m = m / 2;
//     }
//     while (n > 0)
//     {
//         int rem = n % 2;
//         arr2[k++] = rem;
//         n = n / 2;
//     }
//     for (int i = 0; i < j && i < k; i++)
//     {
//         if (arr1[i] != arr2[i])
//         {
//             ans = i;
//             break;
//         }
//     }
//     cout << "Ans: " << ans + 1 << endl;
// }

int getRightMostSetBit(int n)
{
    if (n == 0)
        return 0;
    return log2(n & -n) + 1;
}

int different(int m, int n)
{
    return getRightMostSetBit(m ^ n);
}

int main()
{
    int m = 52, n = 4;
    int ans = different(m, n);
    cout << "Ans: " << ans << endl;
    return 0;
}