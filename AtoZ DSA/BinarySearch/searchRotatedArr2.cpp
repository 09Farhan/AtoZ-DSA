/* Given an integer array arr of size N, sorted in ascending order (may contain duplicate values) and a target value k.
 Now the array is rotated at some pivot point unknown to you.
 Return True if k is present and otherwise, return False. */

#include<bits/stdc++.h>
using namespace std;

bool searchRoatedArr2(vector<int>&arr, int n, int k) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == k) {
            return true;
        }
        
        if (arr[low] == arr[mid] && arr[mid] == arr[high]) {
            low = low + 1;
            high = high - 1;
            continue;
        }

        if (arr[low] <= arr[mid]) {
            if (arr[low] <= k && k <= arr[mid]) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        else {
            if (arr[mid] <= k && k <= arr[high]) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
    }
    return false;
}


int main(){
    int n; 
    cout<<"Enter the number of elements of the array: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int k;
    cout<<"Enter the target value to search for: ";
    cin>>k;

    bool ans =  searchRoatedArr2(arr, n, k);

    if(!ans){
        cout<<"Element is not present in the array. \n";
    }else{
        cout<<"Target is present in the array. \n";
    }
    
    return 0;
}