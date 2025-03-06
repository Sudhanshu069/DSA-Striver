#include <bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(int arr[], int n){
    int count = 0;
    int maxCount = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] == 1){
            count++;
            maxCount = max(count, maxCount);
        }
        else{
            count = 0;
        }
    }
    return maxCount;
}

int main(){
    int t;
    cout<<"enter the number of elements in the array: ";
    cin>>t;
    cout<<"Size of the array: "<<t<<"\n";

    int arr[t];
    for(int i = 0; i < t; i++){
        cout<<"Enter index "<<i<<" of array: ";
        cin>>arr[i];
    }

    cout<<"Given array: ";
    for(auto it: arr){
        cout<<it<<" ";
    }
    cout<<"\n";

    cout<<"Finding maximum consecutive ones..."<<"\n";

    int ans = maxConsecutiveOnes(arr, t);

    cout<<"Max consecutive ones in this arrays are: "<<ans<<"\n";

    return 0;
}