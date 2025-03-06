#include<bits/stdc++.h>
using namespace std;

int numberAppearsTwice(int arr[], int n){
    
}

int main(){
    int t;
    cout<<"Enter the number of elements in the array: ";
    cin>>t;

    cout<<"Size of the array: ";
    int arr[t];

    for(int i = 0; i < t; i++){
        cout<<"Enter index "<<i<<" of the array: ";
        cin>>arr[i];
    }

    cout<<"Given array: ";
    for(auto it: arr){
        cout<<it<<" ";
    }
    cout<<"\n";

    cout<<"Finding the number that appears twice..."<<"\n";
    int answer = numberAppearsTwice(arr, t);
    cout<<"The number that appears twice is: "<<answer<<"\n";

    return 0;
}