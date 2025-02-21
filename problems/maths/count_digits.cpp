#include <bits/stdc++.h>
using namespace std;

int count_digits(int n)
{
    int count = 0, temp = n;
    while (temp > 0)
    {
        int last_digit = temp % 10;
        count++;
        temp = temp / 10;
    }
    return count;
}

int count_digits_optimised(int n)
{
    int count = (int)log10(n) + 1;
    return count;
}

int main()
{
    int num = 0;
    cout << "enter number: ";
    cin >> num;

    cout << "the number of digits in " << num << " is: " << count_digits_optimised(num);
    return 0;
}