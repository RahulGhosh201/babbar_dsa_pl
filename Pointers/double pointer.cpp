#include <bits/stdc++.h>
using namespace std;

void update(int **p2)
{
    // p2 = p2 + 1;
    // cout << **p2;//it will not give any answer
    // *p2 = *p2 + 1;
    // cout << **p2; //it will increase the address
    // **p2 = **p2 + 1;
    // cout << **p2;//it will increase the value of the variable
}

void update(int *p)
{
    *p = (*p) * 2;
}
void increment(int **p)
{
    ++(**p);
}

int main()
{
    int i = 5;
    int *p1 = &i;
    int **p2 = &p1;
    // cout << i << " " << *p1 << " " << **p2 << endl; // all of these give same value

    // cout << &i << " " << p1 << " " << *p2 << endl;  // these will give same value too
    cout << **p2 << endl;
    update(p2);
    // cout << **p2 << endl;
}