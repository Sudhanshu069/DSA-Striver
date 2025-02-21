#include<bits/stdc++.h>
using namespace std;

int printS(int i, int s, int sum, int arr[], int n){
    if(i == n){
        if(s == sum) return 1;
        else return 0;
    }

    s += arr[i];

    int l = printS(i+ 1, s, sum, arr, n);
    s -= arr[i];

    int r = printS(i + 1, s, sum, arr, n);

    return l + r;

}
