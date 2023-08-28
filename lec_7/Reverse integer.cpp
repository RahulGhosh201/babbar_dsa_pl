// input: 123
// output: 321

// input: -123
// output: -321

// input: in any case the output becomes out of range(-2^31 , 2^31 -1 )
// output: 0

#include <bits/stdc++.h>
using namespace std;

void rev(int n)
{
    int ans = 0;
    while (n != 0)
    {
        int rem = n % 10;
        ans = ans * 10 + rem;
        n /= 10;
    }
    if (ans > (INT_MAX / 10) || ans < (INT_MIN / 10))
    {
        cout << 0 << endl;
        return;
    }
    cout << ans << endl;
}

int main()
{
    int n = -12;
    rev(n);
    return 0;
}