#include <bits/stdc++.h>
using namespace std;

/*
 * brute force solution:
 * -> just sort the array and take the largest element and store it for
 * comparison. then traverse from n - 2 element to 0 and find if the first
 * occuring value is smaller than largest element. then break
 * t.c. = O(N) + O(log n);
 */

int second_largest_element_in_array_brute(int arr[], int n)
{
    sort(arr, arr + n);
    int largest = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < largest)
        {
            return arr[i];
            break;
        }
    }
}

/*
 * better solution:
 * first pass: find largest element. and then store it in a variable
 * second pass: traverse again and then find second largest by checking
 * it with largest element.
 * t.c. = O(N) + O(N) = O(2N) (2 passes only)
 */

int second_largest_element_in_array_better(int arr[], int n)
{
    // first pass:
    int largie = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largie)
        {
            largie = arr[i];
        }
    }

    int second_largie = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > second_largie && arr[i] != largie)
        {
            second_largie = arr[i];
        }
    }
    return second_largie;
}

/*
 * OPTIMAL APPROACH:
 * take largest as first element and second_largest as -1.
 * traverse through array and check for largest and if an index has a
 * value greater than largest then largest becomes that index value
 * and second_largest becomes previous largest
 * T.C. = O(N) (1 pass only)
 */

int second_largest_element_in_array(int arr[], int n)
{
    int largest = arr[0];
    int second_largest = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > second_largest)
        {
            second_largest = arr[i];
        }
    }
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
    cout << 'the second largest element in this array is: ' << second_largest_element_in_array(arr, n);
    cout << "\n";

    return 0;
}