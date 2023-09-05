// ip: [1,2,3]
// op: [],[1],[2],[3],[1,2],[1,3],[2,3],[1,2,3]
// ip:[0]
// op:[],[0]
// if the array have n elements, then there are 2^n subsets

#include <bits/stdc++.h>
using namespace std;

void calcSubset(vector<int> &A, vector<vector<int>> &res, vector<int> &subset, int index)
{
    res.push_back(subset); // adding the current subset
    for (int i = index; i < A.size(); i++)
    {
        subset.push_back(A[i]);            // including the current element in the subset
        calcSubset(A, res, subset, i + 1); // recursively generate subsets with the current element included
        subset.pop_back();                 // exclude the current element from the subset
    }
}

vector<vector<int>> subsets(vector<int> &A)
{
    vector<int> subset;
    vector<vector<int>> res;
    int index = 0;
    calcSubset(A, res, subset, index);
    return res;
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> res = subsets(arr);
    // Printing the generated subsets
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}