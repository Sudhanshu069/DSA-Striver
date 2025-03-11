#include <bits/stdc++.h>
using namespace std;

int missingNumberBrute(int arr[], int n)
{
    int flag = 0;
    for (int i = 1; i <= n; i++)
    {
        flag = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] == i)
            {
                flag = 1;
                break;
            }
            if (flag == 0)
            {
                return i;
            }
        }
    }
}

// time complexity: o(n) + o(n);
// space complexity: o(n);
int missingNumberBetter(int arr[], int n)
{
    int hash[n + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    for (int i = 1; i <= n; i++)
    {
        if (hash[i] == 0)
        {
            return i;
        }
    }
    return -1;
}

int missingNumberOptimalSum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return ((n * (n + 1)) / 2) - sum;
}

int missingNumberOptimalXOR(int arr[], int n)
{
    int xor1 = 0, xor2 = 0;
    int x = n - 1;
    for (int i = 0; i < x; i++)
    {
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i + 1);
    }
    return xor1 ^ xor2;
}

int main()
{
    int n;
    cout << "Enter the number of elements of the array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
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

    cout << "Finding missing number in the array..." << "\n";

    int answer = missingNumberOptimalSum(arr, n);

    if (answer != -1)
    {
        cout << "The missing number in this array is: " << answer << "\n";
    }
    else
    {
        cout << "No missing number found.";
    }

    return 0;
}