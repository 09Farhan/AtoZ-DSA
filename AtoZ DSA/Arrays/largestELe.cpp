#include<bits/stdc++.h>
using namespace std;

int largestEle(int arr[], int n){
    int max = arr[0];
    for(int i = 0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
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
    int max = largestEle(arr, n);
    cout<<"The largest element in the array is: "<< max<<endl;
    return 0;
}