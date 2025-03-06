#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        int didSwap = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
        if (didSwap == 0)
        {
            break;
        }
    }
};

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

    bubble_sort(arr, n);

    cout << "after sorting using bubble sort: ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << '\n';

    return 0;
}