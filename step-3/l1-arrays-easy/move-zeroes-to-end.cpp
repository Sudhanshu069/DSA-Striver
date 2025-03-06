#include<bits/stdc++.h>
using namespace std;

//brute force method:
//time complexity = O(n) + O(n);
//space complexity: O(n)
void moveToZeroes(int arr[], int n){
    int newArr[n] = {0};
    int j = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            newArr[j] = arr[i];
            j++;
        }
    }

    for(int i = 0; i < n; i++){
        arr[i] = newArr[i];
    }
}


//single loop optimal solution:
//time complexity : O(n)
//space complexity : O(1)
void moveToZeroesOptimal(int arr[], int n){
    int start = 0, zeroIndex = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            zeroIndex = i;
            swap(arr[zeroIndex], arr[start]);
            start++;
        }
    }
}


int main()
{
    cout << "Enter number of elements: ";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter index " << i << " of the array: ";
        cin >> arr[i];
    }
    cout << "The given array: ";
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << '\n';

    cout<<"Moving zeroes to end..."<<'\n';

    moveToZeroesOptimal(arr, n);

    for(auto it: arr){
        cout<<it<<" ";
    }

    cout << "\n";

    return 0;
}