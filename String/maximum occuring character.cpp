#include <bits/stdc++.h>
using namespace std;

void frequency(string s)
{
    int count[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        int index = s[i] - 'a';
        count[index]++;
    }
    int max = INT_MIN, temp = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (count[i] > max)
        {
            max = count[i];
            temp = i;
        }
    }
    char ans = ('a' + temp);
    cout << "Ans: " << ans << endl;
}

int main()
{
    string s = "engineering";
    frequency(s);
    return 0;
}