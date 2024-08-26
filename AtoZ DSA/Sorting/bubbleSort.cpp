#include<bits/stdc++.h>
using namespace std;

void bubble(int arr[], int n){
    for(int i = n-1; i>=0;i--){
        for(int j = 0; j<=i-1; j++){
            if(arr[j]>arr[j+1]){
            //swapping 
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
            }
        }
    }
    cout << "After Using bubble sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
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
    cout<<"Array before using bubble sort: "<<"\n";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    } 
    cout<<"\n";
    bubble(arr, n);
    return 0;
}