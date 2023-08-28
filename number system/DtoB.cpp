// 0--00
// 1--01
// 2--10
// 3--11
// 4--100
// 5--101
// 6--110
// 7--111
// 8--1000
// 9--1001
// 10--1010

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 10;
    int temp = n;
    stack<int> st;
    // vector<int> v;

    while (n != 0)
    {
        int rem = n % 2;
        // v.push_back(rem);
        st.push(rem);
        n = n / 2;
    }
    // reverse(v.begin(), v.end());
    cout << "Decinal: " << temp << " Binary: ";
    // for (auto it : v)
    // {
    //     cout << it;
    // }
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
    cout << endl;
}
