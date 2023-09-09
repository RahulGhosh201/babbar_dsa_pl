#include <bits/stdc++.h>
using namespace std;

// void leaders(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         int j;
//         for (j = i + 1; j < size; j++)
//         {
//             if (arr[i] <= arr[j])
//                 break;
//         }
//         if (j == size) // the loop didn't break
//             cout << arr[i] << " ";
//     }
// }

void leaders(int arr[], int n)
{
    // stack nie kaj kor6i karon tate thik order e ans pabo, vector nile reverse order e petam
    int ans = arr[n - 1]; /// the last element in an array is always a leader
    stack<int> st;
    st.push(ans);                    // tai take stack r modhye push kore dilam
    for (int i = n - 2; i >= 0; i--) // second last element theke reverse order first element obdhi traverse korbo
    {
        if (ans < arr[i]) // mane as example 3re index r element jodi 2nd index r element r theke boro hoy then sei leader so take push korbo in the stack
        {
            ans = arr[i];
            st.push(ans);
        }
    }
    while (!st.empty()) // stack traverse kora h66e
    {
        cout << st.top() << " "; // stack r top k print kora66i
        st.pop();                // stack r top k eliminate kor6i
    }
    cout << endl;
}
int main()
{
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = 6;
    leaders(arr, n);
}