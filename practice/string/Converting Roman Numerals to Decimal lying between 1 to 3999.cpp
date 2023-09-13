// SYMBOL       VALUE
//   I            1
//   IV           4
//   V            5
//   IX           9
//   X            10
//   XL           40
//   L            50
//   XC           90
//   C            100
//   CD           400
//   D            500
//   CM           900
//   M            1000

#include <bits/stdc++.h>
using namespace std;

int value(char r)
{
    if (r == 'I')
    {
        return 1;
    }
    if (r == 'V')
    {
        return 5;
    }
    if (r == 'X')
    {
        return 10;
    }
    if (r == 'L')
    {
        return 50;
    }
    if (r == 'C')
    {
        return 100;
    }
    if (r == 'D')
    {
        return 500;
    }
    if (r == 'M')
    {
        return 1000;
    }
}

int romanToDecimal(string &str)
{
    int res = 0;
    for (int i = 0; i < str.length(); i++)
    {
        int s1 = value(str[i]);
        if (i + 1 < str.length())
        {
            int s2 = value(str[i + 1]);
            if (s1 >= s2)
            {
                res = res + s1;
            }
            else
            {
                res = res + s2 - s1;
                i++;
            }
        }
        else
        {
            res = res + s1;
        }
    }
    return res;
}

int main()
{
    string str = "MCMIV";
    cout << "Integer form of Roman Numeral is: " << romanToDecimal(str) << endl;
    return 0;
}