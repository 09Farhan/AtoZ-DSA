#include<bits/stdc++.h>
using namespace std;

int removeDup(int arr[], int n){
    int i = 0;
    for(int j=0; j<n; j++){
        if(arr[i]!= arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int remove = removeDup(arr, n);
    cout<<"Array after removing the duplicates: ";
    for(int i=0; i<remove; i++){
        cout<<arr[i]<<" ";       
    }
    return 0;
}