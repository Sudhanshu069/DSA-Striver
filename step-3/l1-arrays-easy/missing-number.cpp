#include <bits/stdc++.h>
using namespace std; 

int missingNumber(int arr[], int n){
    int hash[n];
    for(int i = 0; i < n; i++){
        hash[i] = 0;
    }

    for(int i = 0; i < n; i++){
        if (arr[i] >= 0 && arr[i] < n) { // Check bounds
            hash[arr[i]]++;
        }
    }

    for(int i = 0; i < n; i++){
        if(hash[i] == 0){
            return i;
        }
    }
    return -1;
}

int missingNumberOptimal(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    return (n * (n + 1))/2 - sum;
}

int main(){
    int n;
    cout<<"Enter the number of elements of the array: ";
    cin>>n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cout<<"Enter index "<<i<<" of the array: ";
        cin>>arr[i];
    }

    cout<<"Given array: ";
    for(auto it: arr){
        cout<<it<<" ";
    }
    cout<<"\n";

    cout<<"Finding missing number in the array..."<<"\n";
    
    int answer = missingNumber(arr, n);
    
    if(answer != -1){
        cout<<"The missing number in this array is: "<<answer<<"\n";
    } else{
        cout<<"No missing number found.";
    }

    return 0;
}