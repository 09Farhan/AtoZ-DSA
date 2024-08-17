#include<bits/stdc++.h>
using namespace std;


void printArray(int ans[], int n){
    cout<<"The reversed Array is: "<<endl;
    for (int i = 0; i<n; i++){
        cout<<ans[i]<<" ";
    }
}

void reverseArray(int arr[], int n){
    int ans[n];
    for(int i = n-1; i>= 0; i--){
        ans[n-i-1] = arr[i];
    }
    printArray(ans, n);
}

int main(){
    int n; 
    cout<<"Enter the number of elements in an array: ";
    cin>> n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    reverseArray(arr, n);
    return 0;
}