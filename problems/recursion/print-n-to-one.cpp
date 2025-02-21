#include<bits/stdc++.h>
using namespace std;

void solve(int t){
    if(t == 0){
        return;
    }
    cout<<t<<" ";
    solve(t - 1);
}

void f(int i, int n){
    if(i > n){
        return;
    }
    f(i + 1, n);
    cout<<i<<" ";
}

int main()
{
    int t;
    cin>>t;

    solve(t);
    cout<<endl;
    f(1, t);
    return 0;
}