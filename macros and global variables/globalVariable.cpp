#include <bits/stdc++.h>
using namespace std;

int score = 5;

void a(int &i)
{
    score++;
    cout << "in a " << i << endl;
}

int main()
{
    cout << score << endl; // as we can see even if score is incremented in the a function it does not effect the variable score decared globally.
    int i = 10;
    a(i);
}