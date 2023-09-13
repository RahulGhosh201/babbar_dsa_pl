#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {7, 10, 4, 3, 20, 15}, n = 6, k = 3;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << k << "th smallest element is " << arr[k - 1] << endl;
    return 0;
}