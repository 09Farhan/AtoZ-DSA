/*Given an integer array arr of size N, sorted in ascending order (with distinct values).
Now the array is rotated between 1 to N times which is unknown. 
Find how many times the array has been rotated. */

#include<bits/stdc++.h>
using namespace std;

int numOfRotation(vector<int> &arr, int n){
    int low = 0, high = n - 1;
    int ans = INT_MAX;
    int ind = -1;

    while(low <= high){
        int mid = (low + high)/2;

        if(arr[low] <= arr[high]){
            if(arr[low] < ans){
                ind = low;
                ans = arr[low];
            }
            break;
        }
        if(arr[low] <= arr[mid]){
            if(arr[low] < ans){
                ind = low;
                ans = arr[low];
            }
            low = mid + 1;
        }else{
            if(arr[mid] < ans){
                ind = mid;
                ans = arr[mid];
            }
            high = mid - 1;
        }
    }
    return ind;
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int ans = numOfRotation(arr, n);

    cout<<"The array is rotated "<< ans <<" times."<<endl;

    return 0;

}
