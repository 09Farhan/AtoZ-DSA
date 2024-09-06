#include<bits/stdc++.h>
using namespace std;

int findMissing(int arr[], int n){
    int total = (n + 1) * (n + 2) / 2;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return total - sum;
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
    int  missing = findMissing(arr, n);
    cout<< "Missing number is: " << missing<<endl;
    return 0;
}