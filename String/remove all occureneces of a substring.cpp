#include <bits/stdc++.h>
using namespace std;

void rem(string str, string substr)
{
    while (str.length() != 0 && str.find(substr) < str.length())
    {
        str.erase(str.find(substr), substr.length());
    }
    cout << "Ans: " << str << endl;
}

int main()
{
    string str = "daabcbaabcbc";
    string substr = "abc";
    rem(str, substr);
    return 0;
}