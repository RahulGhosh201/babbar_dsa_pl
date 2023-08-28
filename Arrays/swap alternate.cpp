// input: 1,2,7,5,8
// output: 2,1,5,7,8

#include <bits/stdc++.h>
using namespace std;

int alternate(int arr[], int n)
{
    int size = n - (n % 2);
    for (int i = 0; i < size; i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }
    cout << "Ans: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 7, 5, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    alternate(arr, n);
    return 0;
}