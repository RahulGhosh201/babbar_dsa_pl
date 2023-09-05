#include <bits/stdc++.h>
using namespace std;

void reverse(string &str, int i, int j) // if we have passed string str in place of string &str then it would have not been reversed
{
    if (i > j)
        return;
    swap(str[i], str[j]);
    i++;
    j--;
    reverse(str, i, j);
}

int main()
{
    string str = "abcde";
    cout << "Before reversing: " << str << endl;
    reverse(str, 0, str.length() - 1);
    cout << "After reversing: " << str << endl;
}