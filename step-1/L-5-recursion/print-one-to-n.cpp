#include<bits/stdc++.h>
using namespace std;

void f(int i, int n){
    if(i > n){
        return;
    }
    cout<<i<<" ";
    f(i + 1, n);
}


int main()
{
    int t;
    cin>>t;

    f(1, t);
    return 0;
}