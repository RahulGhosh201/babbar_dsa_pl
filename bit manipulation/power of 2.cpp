#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
    return (floor(log2(n)) == ceil(log2(n)));
}

int main()
{
    isPowerOfTwo(31) ? cout << "Yes" << endl : cout << "No" << endl;
    isPowerOfTwo(64) ? cout << "Yes" << endl : cout << "No" << endl;
}