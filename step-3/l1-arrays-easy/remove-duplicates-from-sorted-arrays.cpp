#include <bits/stdc++.h>
using namespace std;

/*
 * brute force approach
 * store in hashset and then iterate into it then put everything again
 * into the starting indexes of array
 * T.C. = O(Log n) + (O(n));
 */

/*
 * optimal approach
 * Two pointer approach ->
 */

int removeDuplicates(int arr[], int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
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

    cout << "\n";

    return 0;
}