#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int i, int n){
    if(i ==  n){
        return;
    }
    int j = i;
    while(j>0 && arr[j-1] > arr[j]){
        int temp = arr[j-1];
        arr[j-1] = arr[j];
        arr[j] = temp;
        j--;
    }
    insertionSort(arr,i+1, n);
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
    cout<<"Array before sorting the elements: "<<"\n";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertionSort(arr, 0, n);
    cout<<"Array after sorting the elements: "<<"\n";
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}