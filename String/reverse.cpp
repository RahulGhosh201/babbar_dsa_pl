#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "geeksforgeeks";
    cout << str << endl;
    // reverse(str.begin(), str.end());
    // cout << str;
    // int i = 0, n = str.length() - 1;
    // while (i <= n)
    // {
    //     swap(str[i++], str[n--]);
    // }
    // cout << str;
    int a = 0, b = str.length() - 1;
    int n = b;
    for (int i = 0; i < n / 2; i++)
    {
        swap(str[a++], str[b--]);
    }
    cout << str;
}