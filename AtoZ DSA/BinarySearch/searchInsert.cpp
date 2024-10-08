/*You are given a sortd array of distinct values and 
a target value x. You need to search for the index of 
the target value in the array.*/

#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int> &arr, int n, int x){
    int low = 0, high = n-1;
    int ans = n;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] >= x){
            ans = mid;
            high = mid -1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number of elements of the array: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int x;
    cout<<"Enter the target value to search the index for: ";
    cin>>x;

    int ind = searchInsert(arr,n, x);

    cout<<"The index of target value in the array will be: "<<ind<<endl;

    return 0;

}