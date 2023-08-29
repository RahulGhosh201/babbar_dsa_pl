#include <bits/stdc++.h>
using namespace std;

void replace(string str)
{
    string temp = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('0');
            temp.push_back('7');
        }
        else
        {
            temp.push_back(str[i]);
        }
    }
    cout << "Ans: " << temp << endl;
}

int main()
{
    string str = "my name is rahul";
    replace(str);
    return 0;
}