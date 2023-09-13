#include <bits/stdc++.h>
using namespace std;

// unsigned int soln(int n)
// {
//     return log2(n & -n) + 1;
// }

void soln(int n)
{
    int arr[10], k = 0, ans = 0;
    while (n > 0)
    {
        int rem = n % 2;
        arr[k++] = rem;
        n = n / 2;
    }
    for (int i = 0; i < k; i++)
    {
        if (arr[i] == 1)
        {
            ans = i;
            break;
        }
    }
    cout << "Ans: " << (ans + 1);
    cout << endl;
}

int main()
{
    int n = 18;
    // int ans = soln(n);
    soln(n);
    // cout << "Ans: " << ans << endl;
}
// n = 5 hole then - n holo n r 2's complement
//                       explanation->n = 101(5)->1's comlement->010->2's complement->011 n = 101(5)->2's complement->- n = 011(3)

// n=101(5) & -n=011(3)->001(1)
// log(n & -n)=log(5 & 3)=log2(1)=0

// n=110(6) & -n=010(2)->010(2)
// log(n & -n)=log(6 & 2)=log2(2)=1
