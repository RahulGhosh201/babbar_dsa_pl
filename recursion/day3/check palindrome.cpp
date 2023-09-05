#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str, int i, int j)
{
    if (i > j)
        return true;
    if (str[i] != str[j])
        return false;
    return checkPalindrome(str, i + 1, j - 1);
}

int main()
{
    string str = "bokkob";
    bool isPalindrome = checkPalindrome(str, 0, str.length() - 1);
    if (isPalindrome)
    {
        cout << str + " is palindrome" << endl;
    }
    else
    {
        cout << str + " is not palindrome" << endl;
    }
}