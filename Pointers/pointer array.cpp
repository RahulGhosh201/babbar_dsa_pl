#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 10, 3, 4, 5};
    cout << "Address of first memory block is: " << arr << endl;
    cout << "Address of first memory block is: " << &arr[0] << endl;
    cout << "value of *arr: " << *arr << endl;
    cout << "value of *arr+1: " << *arr + 1 << endl;
    cout << "value of *(arr+1): " << *(arr + 1) << endl;
    cout << "value of *(arr)+1: " << *(arr) + 1 << endl;
    // *arr->first element of the array
    // *arr+1->first element of the array+1
    // *(arr+1)->second element of the array
    // *(arr)+1->first element +1

    int temp[10] = {1, 2};
    cout << sizeof(temp) << endl;             // 40 as (10x4)
    cout << " 1st " << sizeof(*temp) << endl; // first element r value r size tai ekhane int r size return korbe
    cout << " 2nd " << sizeof(&temp) << endl; // first element r addrss r size return korbe

    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl;  // address r size return korbe
    cout << sizeof(*ptr) << endl; // value r size
    cout << sizeof(&ptr) << endl; // address r size return korbe

    int arr2[10];
    int *ptr10 = &arr2[0];
    cout << ptr10 << endl;
    ptr10 = ptr10 + 1; // it returns the next elements address
    cout << ptr10 << endl;
}