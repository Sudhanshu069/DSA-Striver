#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    unordered_map<int, int> mapp; // unordered; generally faster
    map<int, int> mpp;

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     mpp[arr[i]]++;
    // }

    // faster way

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    // give values
    for (auto it : mpp)
    {
        cout << it.first << " " << it.second;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        cout << mpp[number] << "\n";
    }

    return 0;
}

/*
 * Note; Map stores all the values in sorted manner
 * T.C. => storing, fetching: log(N) always in best, worst, average
 * in unordered map, the best and average case of storing and fetching
 * gives O(1)
 * and storing and fetching at worst take O(N)
 */