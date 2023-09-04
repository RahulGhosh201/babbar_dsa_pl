#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     // int second = 9;
//     // int *ptr = &second;
//     // *ptr = 8;
//     // cout << *ptr << endl; // result will be 8

//     // int a = 5;
//     // int *p = &a;        //*p=5
//     // int *q = p;         //*q=5
//     // (*q)++;             // a++
//     // cout << *q << endl; // 6

//     // int *x = 0;
//     // int first = 110;
//     // *x = first;
//     // cout << *x << endl; // it will not give any output

//     // int arr[5];
//     // int *ptr;
//     // cout << sizeof(arr) << " " << sizeof(ptr) << endl;

//     // int arr[] = {11, 21, 13, 14};
//     // cout << *(arr) << " " << *(arr + 1) << endl;//*(arr) is equal to arr[0]  *(arr+1) is equal to arr[1]

//     // int arr[6] = {11, 21, 31};
//     // int *p = arr;
//     // cout << p[2] << endl; // it will give arr[2] as p[2]=arr[2]

//     // int arr[] = {11, 21, 31, 41};
//     // int *ptr = arr++;//it will give a compilation error.
//     // cout << *ptr << endl;

//     // char ch = 'a';
//     // char *ptr = &ch;
//     // ch++;
//     // cout << *ptr << endl;//result is b meaning as a pointer holds the address of another variable so of we do some operation in the variable then if we print *ptr or value of of that pointer we will get the updated value of that variable
// }

// void update(int *p)
// {
//     *p = (*p) * 2;
// }

// int main()
// {
//     int i = 10;
//     update(&i);
//     cout << i << endl; // 20
// }

void fun(int arr[])
{
    cout << arr[0] << " ";
}

int main()
{
    int arr[] = {11, 12, 13, 14};
    fun(arr + 1); // it is passing the array from index 1 and that's why arr[0] means 12
    cout << arr[0] << endl;
}
