#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j] > pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high){
    if(low<high){
        int pp = partition(arr, low, high);
        quickSort(arr, low, pp-1);
        quickSort(arr, pp+1, high);
        
    }
}

int main(){
     int n;
    cout<<"Enter the number of elements of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"before sorting the elements: "<<"\n";
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    quickSort(arr,0, n-1);
    cout<<"after sorting the elements: "<<"\n";
    for(int i = 0 ; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}