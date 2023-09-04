#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num = 5;
    cout << num << endl; // 5
    // & is address of operator
    cout << "Address of num: " << &num << endl; // Address of num: 0x7fb1bffcac
    // * is value of operator
    int *ptr = &num;
    cout << "Address of num: " << ptr << endl;
    cout << "Value of num: " << *ptr << endl;
    // so if we create a variable named num and *ptr=&num then
    //  if we want to get address of num we will write &num or ptr
    //  if we want to get value of num we will write num or *ptr

    double d = 10;
    double *ptr2 = &d;

    cout << "Value: " << d << " or " << *ptr2 << endl;
    cout << "Address: " << &d << " or " << ptr2 << endl;
    cout << "Size of integer is: " << sizeof(num) << endl;
    cout << "Size of pointer of integer is: " << sizeof(ptr) << endl;
    cout << "Size of double is: " << sizeof(d) << endl;
    cout << "Size of pointer of double is: " << sizeof(ptr2) << endl;
    // as we can see the size of pointer in both integre and double is same which is 8

    // Another way of declaring a pointer
    int e = 25;
    int *ptr3 = 0;
    ptr3 = &e;

    int f = 5;
    f++;
    cout << "Before: " << f << endl;
    int *p4 = &f;
    (*p4)++; // it works same as f++
    cout << "After: " << f << endl;
    cout << "now p4: " << *p4 << endl;
    p4++;
    cout << "now p4: " << *p4 << endl;

    // Copying a pointer
    int *p5 = p4;
    cout << *p5 << endl;

    // *ptr++ will increment the Address before then it will return the character at particular location.But ptr++ will increment the address directly.
}