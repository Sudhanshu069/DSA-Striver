#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int hashh[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hashh[s[i] - 'a']++;
    }

    // int q;
    // cin >> q;
    // while (q--)
    // {
    //     char c;
    //     cin >> c;
    //     // fetch
    //     cout << hashh[c - 'a'] << endl;
    // }

    for (auto it : hashh)
    {
        
    }
    return 0;
}
