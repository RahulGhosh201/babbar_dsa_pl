#include <bits/stdc++.h>
using namespace std;

void median(int arr[][3])
{
    vector<int> a;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a.push_back(arr[i][j]);
        }
    }
    sort(a.begin(), a.end());
    int size = a.size();
    cout << "Ans: " << a[size / 2] << endl;
}

int main()
{
    int arr[3][3] = {{1, 3, 5},
                     {2, 6, 9},
                     {3, 6, 9}};
    median(arr);
}