// diff b/w inline and normal function->
// in case of inline function, syntax -
// inline return-type function-name(parameters){}
// meaning if we call another function inside of an inline function,
//     the control of the program remains inside the function.and the called function works inside that inline function.
// But in case of a normal function if we call another function inside that
// the control of the prohram goes to the called function.
#include <iostream>
using namespace std;

inline int getMax(int &a, int &b)
{
    return (a > b) ? a : b;
}

int main()
{

    int a = 1, b = 2;
    int ans = 0;

    ans = getMax(a, b);
    cout << ans << endl;

    a = a + 3;
    b = b + 1;

    ans = getMax(a, b);
    cout << ans << endl;

    return 0;
}