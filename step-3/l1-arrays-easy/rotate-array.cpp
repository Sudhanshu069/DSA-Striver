#include <bits/stdc++.h>
using namespace std;

/*
 * T.C. -> O(n)
 */

void left_rotate_by_one_place(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}

int main()
{
    cout << "Enter number of elements: ";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter index " << i << " of the array: ";
        cin >> arr[i];
    }
    cout << "The given array: ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << '\n';

    // function goes here
    left_rotate_by_one_place(arr, n);
    cout << "array after left rotating by 1 place would be: ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << "\n";

    return 0;
}