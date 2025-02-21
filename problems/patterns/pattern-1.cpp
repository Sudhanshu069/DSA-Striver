#include <bits/stdc++.h>
using namespace std;

void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << '*' << ' ';
        }
        cout << '\n';
    }
}

void print2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << '\n';
    }
}

void print3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << '\n';
    }
}

void print4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << '\n';
    }
}

void print5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << '\n';
    }
}

void print6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << '\n';
    }
}

void print7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << ' ';
        }

        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << '*';
        }

        for (int l = 0; l < n - i - 1; l++)
        {
            cout << ' ';
        }
        cout << '\n';
    }
}

void print8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << ' ';
        }

        for (int k = 0; k < 2 * n - (2 * i + 1); k++)
        {
            cout << '*';
        }

        for (int l = 0; l < i; l++)
        {
            cout << ' ';
        }
        cout << '\n';
    }
}

void print9(int n)
{
    print7(n);
    print8(n);
}

void print10(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
    }
}

void print11(int n)
{
}

int main()
{
    int n;
    cin >> n;
    print10(n);

    return 0;
}
