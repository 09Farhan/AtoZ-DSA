#include<bits/stdc++.h>
using namespace std;

int secondLargest(int arr[], int n){
    int largest = arr[0];
    int sLargest = -1;
    for(int i =1; i<n; i++){
        if(arr[i] > largest){
            sLargest = largest;
            largest = arr[i];
        }else if(arr[i]< largest && arr[i] > sLargest){
            sLargest = arr[i];
        }
    }
    return sLargest;
}

int main(){
    int n;
    cout<<"Enter the number of elements of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int max = secondLargest(arr, n);
    cout<<"The second largest element in the array is: "<< max<<endl;
    return 0;
}