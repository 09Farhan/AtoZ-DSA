#include<bits/stdc++.h>
using namespace std;

int secondSmallest(int arr[], int n){
    int smallest = arr[0];
    int sSmallest = INT_MAX;
    for(int i = 1; i<n; i++ ){
        if(arr[i]< smallest){
            sSmallest = smallest;
            smallest = arr[i];
        }else if(arr[i] != smallest && arr[i] < sSmallest){
            sSmallest = arr[i];
        }
    }
    return sSmallest;
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>> n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    } 
    int sMin = secondSmallest(arr, n);
    cout<<"The second smallest element of the array is: "<< sMin<<endl;
    return 0;
}