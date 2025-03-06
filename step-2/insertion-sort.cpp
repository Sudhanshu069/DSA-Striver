#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j >= 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j - 1], arr[j]);
            j--;
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

    cout << "before sorting: ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << '\n';

    insertion_sort(arr, n);

    cout << "after sorting using insertion sort: ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << '\n';

    return 0;
}