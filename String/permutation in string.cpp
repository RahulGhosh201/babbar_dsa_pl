#include <bits/stdc++.h>
using namespace std;

bool permutation(string s1, string s2)
{
    string temp = s1;
    reverse(s1.begin(), s1.end());
    while (s2.length() != 0 && s2.find(s1) < s2.length())
    {
        if (s2.find(s1) || s2.find(temp))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string s1 = "ab";
    string s2 = "eidbaooo";
    int x = permutation(s1, s2);
    if (x == 1)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}