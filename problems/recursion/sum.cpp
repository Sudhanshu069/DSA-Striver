#include<bits/stdc++.h>
using namespace std;

int recSum(int n){
    if (n == 0){
        return 0;
    }
    return n + recSum(n - 1);
}

int main(){

    int n;
    cin>>n;

    cout<<recSum(n);
}