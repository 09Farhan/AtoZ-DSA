#include<bits/stdc++.h>
using namespace std;

void moveZeroes(int arr[], int n){
    int nz = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] != 0){
            swap(arr[nz], arr[i]);
            nz++;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    moveZeroes(arr, n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}