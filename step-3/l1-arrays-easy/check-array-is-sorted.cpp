#include <bits/stdc++.h>
using namespace std;

bool array_is_sorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[n - 1])
        {
        }
        else
        {
            return false;
        }
    }
    return true;
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
    if (array_is_sorted(arr, n))
    {
        cout << "The array is sorted.";
    }
    else
    {
        cout << "The array is not sorted";
    }
    cout << "\n";

    return 0;
}