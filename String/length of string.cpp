#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter your name: ";
    cin >> str;
    int count = 0;
    // cout << "Length: " << str.size() << endl;
    // cout << "Length: " << str.length() << endl;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    cout << "Length: " << count << endl;
}