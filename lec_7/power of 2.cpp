// input: 1
// output: true
// explanation: 2^0=1 ,so 1 is power of 2

// input: 16
// output: true
// explanation: 2^4=16
// approach: 0-30 loop chalabo tar modhye n thakle yes else no
#include <bits/stdc++.h>
using namespace std;

bool isPowerofTwo(int n)
{
    for (int i = 0; i <= 30; i++)
    {
        if (n == (pow(2, i)))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n = 15;
    bool ans = isPowerofTwo(n);
    if (ans == 0)
    {
        cout << "Not" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
    return 0;
}