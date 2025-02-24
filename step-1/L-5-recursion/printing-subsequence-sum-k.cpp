#include<bits/stdc++.h>
using namespace std;

void f(int i, vector<int> ds, int s, int sum, int arr[], int n){
    if(i == n){
        if(s == sum){
            for(auto it: ds){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }

    ds.push_back(arr[i]);
    s += arr[i];

    f(i + 1, ds, s, sum, arr, n);
    s-= arr[i];
    ds.pop_back();

    f(i + 1, ds, s, sum, arr, n);
}


int main()
{
    int arr[] = {1,2,1};
    int sum = 2;
    int n = 3;
    vector<int> ds;
    f(0, ds, 0, sum ,arr, n);
    return 0;
}