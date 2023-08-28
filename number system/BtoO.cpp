// BtoD -> DtoO
// 01101--13
// 111--7
// 1010101--125

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n = 1010101, i = 0, dec = 0;
    long long temp1 = n;
    while (n != 0)
    {
        int rem = n % 10;
        dec += rem * pow(2, i);
        n = n / 10;
        i++;
    }
    int x = dec;
    stack<int> st;
    while (x != 0)
    {
        int rem = x % 8;
        st.push(rem);
        x /= 8;
    }
    cout << "Binary: " << temp1 << " Decinal: " << dec << " Octal: ";
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
}