#include <bits/stdc++.h>
using namespace std;

int numberAppearsOnceBetter(int arr[], int n)
{
    // hashing
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for (auto it : mp)
    {
        if (it.second == 1)
        {
            return it.first;
        }
    }
    return -1;
}

int numberAppearsOnce(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    return res;
}

int main()
{
    int t;
    cout << "Enter the number of elements in the array: ";
    cin >> t;

    cout << "Size of the array: " << t << "\n";
    int arr[t];

    for (int i = 0; i < t; i++)
    {
        cout << "Enter index " << i << " of the array: ";
        cin >> arr[i];
    }

    cout << "Given array: ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << "\n";

    cout << "Finding the number that appears once..." << "\n";
    int answer = numberAppearsOnce(arr, t);
    cout << "The number that appears once is: " << answer << "\n";

    return 0;
}