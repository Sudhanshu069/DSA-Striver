#include <bits/stdc++.h>
using namespace std;

int reverse(int n)
{
    int ans = 0;
    int temp = n;

    while (temp > 0)
    {
        int digit = temp % 10;
        ans = ans * 10 + digit;
        temp = temp / 10;
    }
    return ans;
}

int main()
{
}