#include <bits/stdc++.h>
using namespace std;

bool areDistinct(string str, int i, int j)
{
    vector<bool> visited(256);
    for (int k = i; k <= j; k++)
    {
        if (visited[str[k]] == true)
            return false;
        visited[str[k]] = true;
    }
    return true;
}

int longestUniqueSubstr(string str)
{
    int n = str.size();
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (areDistinct(str, i, j))
            {
                res = max(res, j - i + 1);
            }
        }
    }
    return res;
}
int main()
{
    string str = "GEEKSFORGEEKS";
    int n = str.size();
    int len = longestUniqueSubstr(str);
    cout << "The length of the longest non-repeating "
            "character substring is "
         << len << endl;
    return 0;
}