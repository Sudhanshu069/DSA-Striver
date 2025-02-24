#include<bits/stdc++.h>
using namespace std;
long long factorial(long long n){
    if(n <= 0){
        return 1;
    }
    return n * factorial(n - 1);
}

vector<long long> factorialNumbers(long long n){
    vector<long long> ans;
    for(int i = 1; i <= n; i++){
        while(factorial(i) <= n){
            ans.emplace_back(factorial(i));
        }
    }
    return ans;
}

int main(){
    int n = 7;
    vector<int> bruh;
    factorialNumbers(n);
    for(auto it: bruh){
        cout<<it<<" ";
    }

    return 0;
}