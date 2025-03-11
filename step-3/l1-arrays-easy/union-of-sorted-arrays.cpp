#include <bits/stdc++.h>
using namespace std;

// brute force solution
// TC = o(nlog n) + o(n);
vector<int> findUnion(vector<int> &a, vector<int> &b)
{
    set<int> st;
    for (int i = 0; i < a.size(); i++)
    {
        st.emplace(a[i]);
    }

    for (int j = 0; j < b.size(); j++)
    {
        st.emplace(b[j]);
    }

    return vector<int>(st.begin(), st.end());
}

// Function to return a list containing the union of the two arrays.
vector<int> findUnionOptimal(vector<int> &a, vector<int> &b)
{
    vector<int> UnionArr;
    UnionArr.reserve(a.size() + b.size()); // Reserve space for efficiency

    int i = 0, j = 0;

    while (i < a.size() && j < b.size())
    {
        if (a[i] < b[j])
        {
            if (UnionArr.empty() || UnionArr.back() != a[i])
            {
                UnionArr.push_back(a[i]);
            }
            i++;
        }
        else if (a[i] > b[j])
        {
            if (UnionArr.empty() || UnionArr.back() != b[j])
            {
                UnionArr.push_back(b[j]);
            }
            j++;
        }
        else
        { // a[i] == b[j]
            if (UnionArr.empty() || UnionArr.back() != a[i])
            {
                UnionArr.push_back(a[i]);
            }
            i++;
            j++;
        }
    }

    // Process remaining elements in array a
    while (i < a.size())
    {
        if (UnionArr.empty() || UnionArr.back() != a[i])
        {
            UnionArr.push_back(a[i]);
        }
        i++;
    }

    // Process remaining elements in array b
    while (j < b.size())
    {
        if (UnionArr.empty() || UnionArr.back() != b[j])
        {
            UnionArr.push_back(b[j]);
        }
        j++;
    }

    return UnionArr;
}
