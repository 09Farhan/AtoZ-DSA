//find the number that appears once and the other numbers twice
#include<bits/stdc++.h>
using namespace std;

int getSingleElement(int arr[], int n){
    int xorr = 0;
    for(int i = 0; i<n; i++){
        xorr = xorr ^ arr[i];
    }
    return xorr;
}

int main(){
    //initializing the number of elements in the array
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    //initializing array
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    //getting the element by calling the function
    int ele = getSingleElement(arr, n);
    cout<<"The Single element is: "<< ele<< endl;
    return 0;
}