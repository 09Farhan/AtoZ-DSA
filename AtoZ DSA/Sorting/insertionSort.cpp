#include<bits/stdc++.h>
using namespace std;

void insertion(int arr[], int n){
    for(int i=0;i<=n-1; i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    cout<<"after sorting the array: "<<"\n";
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    int n;
    cout<<"Enter the number of elements in an array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"before sorting: "<<"\n";
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    insertion(arr, n);
    return 0;
}