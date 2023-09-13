#include <bits/stdc++.h>
using namespace std;

int anagramOrNot(string str1, string str2)
{
    int n1 = str1.length();
    int n2 = str2.length();
    if (n1 != n2)
    {
        return false;
    }
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    // for (int i = 0; i < n1; i++)
    // {
    //     if (str1[i] != str2[i])
    //     {
    //         return false;
    //     }
    // }
    // return true;
    int flag = 0;
    if (str1.compare(str2) == 0)
    {
        flag = 1;
    }
    else
    {
        flag = 0;
    }
    return flag;
}

int main()
{
    string str1 = "listen", str2 = "silent";
    int ans = anagramOrNot(str1, str2);
    if (ans == 1)
    {
        cout << str1 << " & " << str2 << " are anagram of each other" << endl;
    }
    else
    {
        cout << str1 << " & " << str2 << " are not anagram of each other" << endl;
    }
}