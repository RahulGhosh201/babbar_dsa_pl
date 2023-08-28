// ip: 0,1,1,5 k=5
// op: 1

#include <bits/stdc++.h>
using namespace std;

int firstOccurence(int arr[], int n, int k)
{
    int start = 0, end = n - 1, ans = -1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            end = mid - 1;
        }
        if (k > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}

int secondOccurence(int arr[], int n, int k)
{
    int start = 0, end = n - 1, ans = -1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == k)
        {
            ans = mid;
            start = mid + 1;
        }
        if (k > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return ans;
}

pair<int, int> fandlPos(int arr[], int n, int k)
{
    pair<int, int> p;
    p.first = firstOccurence(arr, n, k);
    p.second = secondOccurence(arr, n, k);
    return p;
}

int main()
{
    int arr[] = {1, 2, 3, 3, 5}, n = 5, key = 3;
    pair<int, int> ans = fandlPos(arr, n, key);
    cout << "Ans: " << (ans.second - ans.first) << endl;
}