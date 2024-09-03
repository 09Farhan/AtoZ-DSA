#include<bits/stdc++.h>
using namespace std;
void leftRotate(int arr[], int n, int d){
    reverse(arr, arr+d);
    reverse(arr+d, arr+n);
    reverse(arr, arr+n);
}

int main(){
     int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int d;
    cout<<"The number of digits you want to rotate in the array: ";
    cin>>d;
    leftRotate(arr,n,d);
    cout<<"The rotated array is : " << endl;
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}