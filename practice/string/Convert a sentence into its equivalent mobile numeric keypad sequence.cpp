// Input: GEEKSFORGEEKS
// Output: 4333355777733366677743333557777

// Input : HELLO WORLD
// Output : 4433555555666096667775553
#include <bits/stdc++.h>
using namespace std;

string printSequence(string arr[], string input)
{
    string output = ""; // initialize korlam as a empty string
    int n = input.length();
    for (int i = 0; i < n; i++)
    {
        if (input[i] = ' ')
        {
            output = output + "0"; // space bar r jonno '0' print hbe
        }
        else
        {
            int pos = input[i] - 'A';
            output = output + arr[pos];
        }
    }
    return output;
}

int main()
{
    string input = "GEEKSFORGEEKS";
    string str[] = {"2", "22", "222", "3", "33", "333", "4", "44", "444", "5", "55", "555", "6", "66", "666", "7", "77", "777", "7777", "8", "88", "888", "9", "99", "999", "9999"};
    cout << "Input: " << input << "Output: " << printSequence(str, input) << endl;
    return 0;
}