#include <bits/stdc++.h>
using namespace std;

int isSubstring(string s1, string s2)
{
    if (s1.find(s2) != string::npos)
        return s1.find(s2);
    return -1;
}

int main()
{
    string s1 = "geeksforgeeks", s2 = "for";
    int res = isSubstring(s1, s2);
    if (res == -1)
    {
        cout << s2 << " is not found in " << s1 << endl;
    }
    else
    {
        cout << s2 << " is found at " << res << " in " << s1 << endl;
    }
}