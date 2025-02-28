#include <bits/stdc++.h>
using namespace std;

// brute solution
/*
 * sort the array and get the largest element which would be at the last
 * index.
 * T.C. - O(N Log N)
 */

// optimal solution
/*
 * take first element as the largest element.
 * traverse through array and check if the index is greater than largest
 * element, if it is, update and then return the largest element in the end.
 * T.C. = O(N)
 */

int largest_element_in_array(int arr[], int n)
{
    int largei = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largei)
        {
            largei = arr[i];
        }
    }
    return largei;
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
    cout << 'the largest element in this array is: ' << largest_element_in_array(arr, n);
    cout << "\n";

    return 0;
}