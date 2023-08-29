// ip: 1,2,3,4,5,6,7 k=3
// op: 5,6,7,1,2,3,4

#include <bits/stdc++.h>
using namespace std;
// taking an extra space
//  void rotateArray(int arr[], int n, int k)
//  {
//      int m = n % k, temp[n], a = 0;
//      for (int i = n - k; i < n; i++)
//      {
//          temp[a++] = arr[i];
//      }
//      for (int i = 0; i < n - k; i++)
//      {
//          temp[a++] = arr[i];
//      }

//     cout << "Ans: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << temp[i] << " ";
//     }
//     cout << endl;
// }

void rotateArray(int arr[], int n, int k)
{
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = arr[i];
    }
    cout << "Ans: ";
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7}, n = 7, k = 3;
    rotateArray(arr, n, k);
    return 0;
}