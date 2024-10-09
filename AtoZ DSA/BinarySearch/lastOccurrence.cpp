#include<bits/stdc++.h>
using namespace std;

int lastOccur(vector<int> &arr, int n, int target){
    int low = 0, high = n-1;
    int ans = -1;

    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == target){
            ans = mid;
            low = mid + 1;
        }else if(target < arr[mid]){
            high = mid -1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the sorted array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the target to find the last occurrence of: ";
    cin>>x;

    int ind = lastOccur(arr, n , x);
    if(ind == -1){
        cout<<"Element not found in the array.";
    }else{
    cout<<"The last occurrence of the target element is: "<<ind<<endl;
    }
    return 0;
}