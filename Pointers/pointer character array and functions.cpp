#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//     char ch[6] = "abcde";
//     cout << ch << endl;
//     // char ch[n] means ch named character array can contain 5 character and the last element is always null
//     int arr[5] = {1, 2, 3, 4, 5};
//     cout << arr << endl; // it will return the address of arr array
// }

void print(int *p)
{
    cout << *p << endl;
}

void update(int *p)
{
    *p = *p + 1;
}

int getSum(int *arr, int n) // arr[] is equal to *arr while recieving elements in a function
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int value = 5;
    int *p = &value;
    print(p);
    update(p);
    print(p);
    int arr[] = {1, 2, 3, 4, 5};
    cout << getSum(arr, 5) << endl;
}