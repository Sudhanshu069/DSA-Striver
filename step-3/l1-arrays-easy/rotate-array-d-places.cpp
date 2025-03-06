#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int d, int n){
    d = d % n;

    int temp[d]; // temp array to store in

    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    //shifting
    for (int i = d; i < n; i++)
    {
        arr[i-d] = arr[i];
    }

    //putting back in:
    for(int i = n - d; i < n; i++){
        arr[i] = temp[i - (n - d)];
    }
    
}

int main()
{
    cout << "Enter number of elements: ";
    int n;
    cin >> n;
    cout<<"size of array; "<<n<<"\n";
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

    // function goes here
    cout<<"Enter the number of places to LEFT rotate: ";
    int d;
    cin>>d;
    
    cout<<"Rotating array..."<<"\n";
    leftRotate(arr, d, n);
    cout<<"After rotation: ";
    for(auto it: arr){
        cout<<it<<" ";
    }
    cout<<'\n';

    return 0;
}