#include <bits/stdc++.h>
using namespace std;
/*
 * T.C. -> O(n^2);
 */

void selection_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        /*
         * here we are finding the minimum elements index, so we can
         * swap later with it.
         */

        int mini = i;
        /*
         * finding minimum in this part. notice the index positions..
         * we are only going to last part of the array
         *
         */
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
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

    cout << "before sorting: ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << '\n';

    selection_sort(arr, n);

    cout << "after sorting using selection sort: ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << '\n';
    return 0;
}