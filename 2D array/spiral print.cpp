#include <bits/stdc++.h>
using namespace std;

void spiral(vector<vector<int>> arr)
{
    vector<int> ans;
    int row = arr.size();
    int col = arr[0].size();
    int count = 0;
    int total = row * col;
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;
    while (count < total)
    {
        for (int i = startingCol; i <= endingCol; i++)
        {
            ans.push_back(arr[startingRow][i]);
            count++;
        }
        startingRow++;

        for (int i = startingRow; i <= endingRow; i++)
        {
            ans.push_back(arr[i][endingCol]);
            count++;
        }
        endingCol--;

        for (int i = endingCol; i >= startingCol; i--)
        {
        }
    }
}
