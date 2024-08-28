#include<bits/stdc++.h>
using namespace std;

void bubble(int arr[], int n){
    if (n==1){
        return;
    }
    for(int j=0; j<=n-2; j++){
       if(arr[j]>arr[j+1]){
        int temp = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = temp;
       }
    }
    bubble(arr, n-1);
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
    cout<<"array before sorting the elements: "<<"\n";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubble(arr, n);
    cout<<"array after sorting the elements: "<<"\n";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}