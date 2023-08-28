// 101--5
// 111--7
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 1000, ans = 0, i = 0;
    int temp = n;
    while (n != 0)
    {
        int rem = n % 10;
        ans += rem * pow(2, i);
        n = n / 10;
        i++;
    }
    cout << "Binary: " << temp << " Decimal: " << ans << endl;
}