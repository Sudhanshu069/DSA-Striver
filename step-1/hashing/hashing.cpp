#include <bits/stdc++.h>
using namespace std;

/*
 * Note: Here you can declare it until 10 ^ 7 (global scope) for int
 */

int main()
{
    int t;
    cin >> t;

    int arr[t];

    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }

    // precompute
    /*
     * Note: Inside main(), you can declare a hash array of max size: 10 ^ 6 for int
     */

    int hash[10000] = {0};

    for (int i = 0; i < t; i++)
    {
        hash[arr[i]] += 1;
        // you can also write it as: hash[arr[i]]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int num;
        cin >> num;
        // precompute
        cout << hash[num] << '\n';
    }
    return 0;
}