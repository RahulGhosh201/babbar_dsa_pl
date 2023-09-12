#include <bits/stdc++.h>
using namespace std;

void swapping(int n)
{
    int arr[10] = {0}, k = 0;
    while (n > 0)
    {
        int rem = n % 2;
        arr[k++] = rem;
        n = n / 2;
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    reverse(arr, arr + size);
    for (int i = 0; i < k; i++)
    {
        if (arr[i] == 1)
        {
            arr[i] = 0;
        }
        else
        {
            arr[i] = 1;
        }
    }
    int ans = 0;
    for (int i = 0; i < k; i++)
    {
        ans = ans + arr[i] * pow(2, i);
    }
    cout << "Ans: " << ans << endl;
}

int main()
{
    int n = 2;
    swapping(n);
    return 0;
}
