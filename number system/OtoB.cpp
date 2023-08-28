// OtoD->DtoB
// 41 = 100001

#include <bits/stdc++.h>
using namespace std;

int OctoDec(int n)
{
    int dec = 0, i = 0;
    while (n != 0)
    {
        int rem = n % 10;
        dec += rem * pow(8, i);
        n /= 10;
        i++;
    }
    return dec;
}

stack<int> DectoBin(int n)
{
    stack<int> st;
    while (n != 0)
    {
        int rem = n % 2;
        st.push(rem);
        n /= 2;
    }
    return st;
}

int main()
{
    int octal = 41;
    int decimal = OctoDec(octal);
    stack<int> st = DectoBin(decimal);
    cout << "Octal: " << octal << " -> Decimal: " << decimal << " -> Binary: ";
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
}