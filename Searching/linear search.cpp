// ip: 5,4,6,8,9 target: 6
// op: 3

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {5, 4, 6, 8, 9}, n = 5, key = 7;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << key << " is found at position: " << (i + 1) << endl;
            return 0;
        }
    }
    cout << key << " is not found in the array" << endl;
}