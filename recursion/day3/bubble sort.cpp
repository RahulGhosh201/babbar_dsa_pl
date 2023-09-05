// traverse from left to right in the array
// first we will try to position the maximum value in the last element
// then the second most element in the second largest element and to do that
// we will compare each element with it's next element and the left element is greater
// than right element then swap between them

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    if (n == 0 || n == 1)
    {
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    bubbleSort(arr, n - 1);
}

int main()
{
    int arr[] = {2, 5, 1, 6, 9};
    cout << "Elements before sorting: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "Elements after sorting: " << endl;
    bubbleSort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}