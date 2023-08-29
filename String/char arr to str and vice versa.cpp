#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter your name: ";
    cin >> str;

    int length = str.length();
    char arr[length + 1];
    arr[length] = '\0';
    for (int i = 0; i < length; i++)
    {
        arr[i] = str[i];
    }
    cout << arr << " " << str << endl;

    char a[] = {'c', 'o', 'd', 'e'};
    char b[] = "books";
    int sa = sizeof(a) / sizeof(a[0]);
    int sb = sizeof(b) / sizeof(b[0]);
    string stra = "", strb = "";
    for (int i = 0; i < sa; i++)
    {
        stra += a[i];
    }
    for (int i = 0; i < sb; i++)
    {
        strb += b[i];
    }
    cout << stra << " " << strb << endl;
}