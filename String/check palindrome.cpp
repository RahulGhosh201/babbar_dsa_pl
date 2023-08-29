#include <bits/stdc++.h>
using namespace std;

bool isPallindrome(string str, string temp)
{
    reverse(str.begin(), str.end());
    if (str == temp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string str = "nayan";
    string temp = str;
    bool x = isPallindrome(str, temp);
    if (x == 1)
    {
        cout << "It's pallindrome" << endl;
    }
    else
    {
        cout << "It's not pallindrome" << endl;
    }
    return 0;
}