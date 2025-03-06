#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int target){
    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main()
{
    int t;
    cout<<"Enter the number of elements to input: ";
    cin>>t;
    cout<<"Size of array: "<<t<<"\n";
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
    cout<<"Enter number to find in the array: ";
    int target = 0;
    cin>>target;

    cout<<"Searching..."<<"\n";
    int ans = linearSearch(arr, t, target);

    if(ans != -1){
        cout<<target<<" is present at index "<<ans<<"\n";
    }
    else{
        cout<<target<<" not found.";
    }

    return 0;
}