/*Given an integer array arr of size N, sorted in ascending order (with distinct values). 
Now the array is rotated between 1 to N times which is unknown. 
Find the minimum element in the array. */

#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int> &arr, int n){
    int low = 0, high = n-1;
    int ans = INT_MAX;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[low] <= arr[high]){
            ans = min(ans, arr[low]);
            break;
        }
        if(arr[low] <= arr[mid]){
            ans = min(ans, arr[low]);
            low = mid + 1;
        }else{
            ans = min(ans, arr[mid]);
            high = mid - 1;
        }
    }
    return ans;
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

    int ans =  findMin(arr, n);
    cout<<"The minimum element is: "<<ans<<endl;

    return 0;
}
