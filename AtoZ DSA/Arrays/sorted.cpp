#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i] >= arr[i-1]){

        }else{
            return false;
        }
    }
    return true;
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

    if(isSorted(arr, n) == 1){
        cout<<"Array is sorted \n"<<endl;
    }else{
        cout<<"Array is not sorted";
    }
    return 0; 
}