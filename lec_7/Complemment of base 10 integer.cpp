// input: 5
// output: 2
// explanation: 5->101 r complement 010->2
// input: 7
// output: 0

#include <bits/stdc++.h>
using namespace std;

void complement(int n)
{
    vector<int> st;
    while (n != 0)
    {
        int rem = n % 2;
        if (rem == 0)
        {
            st.push_back(1);
        }
        else
        {
            st.push_back(0);
        }
        n /= 2;
    }
    int ans = 0, i = 0;
    for (auto it : st)
    {
        ans += it * pow(2, i);
        i++;
    }
    cout << "Ans:  " << ans << endl;
}

int main()
{
    int n = 7;
    complement(n);
    return 0;
}