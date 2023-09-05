#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int idx, int size)
{
    if (idx == size)
        return;

    int smallestIdx = idx; // take curr idx element as smallest

    for (int i = idx + 1; i < size; i++)
    {
        if (arr[smallestIdx] > arr[i]) // found another smallest element than arr[smallestIdx]
            smallestIdx = i;           // update the smallestIdx val
    }

    // place smallest element found at idx
    int temp = arr[idx];
    arr[idx] = arr[smallestIdx];
    arr[smallestIdx] = temp;

    // one part Done recursion will do other work;
    selectionSort(arr, idx + 1, size);
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
    selectionSort(arr, 0, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}