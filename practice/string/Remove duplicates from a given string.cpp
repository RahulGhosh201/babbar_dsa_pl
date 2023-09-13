#include <bits/stdc++.h>
using namespace std;

char *removeDuplicates(char str[], int n)
{
    cout << n << endl;
    unordered_set<char> s(str, str + n - 1);
    int i = 0;
    for (auto it : s)
    {
        str[i++] = it;
    }
    str[i] = '\0';
    return str;
}

int main()
{
    char str[] = "geeksforgeeks";
    int n = sizeof(str) / sizeof(str[0]);
    cout << removeDuplicates(str, n);
    return 0;
}