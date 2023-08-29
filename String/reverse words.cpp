#include <bits/stdc++.h>
using namespace std;

string reverseString(string str)
{
    stringstream ss(str);
    vector<string> words;
    string temp;

    while (ss >> temp)
    {
        words.push_back(temp);
    }

    for (int i = 0; i < words.size(); i++)
    {
        reverse(words[i].begin(), words[i].end());
    }

    string rev = "";
    for (int i = 0; i < words.size(); i++)
    {
        rev += words[i] + " ";
    }
    rev.pop_back();
    reverse(rev.begin(), rev.end());
    return rev;
}

int main()
{
    string str = "I like it";
    string rev = reverseString(str);
    cout << rev << endl;
    return 0;
}