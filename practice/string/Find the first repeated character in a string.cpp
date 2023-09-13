#include <bits/stdc++.h>
using namespace std;

int firstRepeating(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                return i;
            }
        }
    }
}

int main()
{
    string str = "geeksforgeeks";
    int ans = firstRepeating(str);
    cout << "First repeated character in " << str << " is " << str[ans] << endl;
    return 0;
}