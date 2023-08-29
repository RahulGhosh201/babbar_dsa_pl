// input : 1, 2, 2, 1, 1, 3
// output : true
// explanation: count of 3 is 1
//              count of 2 is 2
//              count of 1 is 3 , so all the elments' counts are different
// input : 1, 2
// output : false

#include <bits/stdc++.h>
using namespace std;

bool unique(int arr[], int n)
{
    map<int, int> count;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    for (auto pr : count)
    {
        s.insert(pr.second);
    }
    return count.size() == s.size();
}

int main()
{
    int arr[] = {1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool ans = unique(arr, n);
    if (ans == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}