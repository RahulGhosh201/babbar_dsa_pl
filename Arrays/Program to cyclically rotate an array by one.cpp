#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;
}

void rev(int arr[], int n)
{
    vector<int> v;
    v.push_back(arr[n - 1]);
    for (int i = 0; i < n - 1; i++)
    {
        v.push_back(arr[i]);
    }
    cout << "After reversing: ";
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    rev(arr, n);
    cout << "Reversed array is" << endl;
    printArray(arr, n);

    return 0;
}