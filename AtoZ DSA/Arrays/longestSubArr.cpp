//Given an array and a sum k, we need to print the length of the longest subarray that sums to k(positives only)
#include<bits/stdc++.h>
using namespace std;

int getLongestSubArray(int arr[],int n, long long k ){
    int left = 0, right = 0;
    long long sum = arr[0];
    int maxLen = 0;
    
    while(right < n){
        while(left <= right && sum>k){
            sum -= arr[left];
            left++;
        }
        if(sum == k){
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if(right<n){
            sum += arr[right];
        }
    }
    return maxLen;
}

int main(){
    int n;
    cout<<"Enter the number of elements of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    long long k;
    cout<<"Enter the sum: ";
    cin>>k;
    
    int len = getLongestSubArray(arr,n,k);
    cout<<"The length of the longest Sub-Array is: "<< len<<endl;
    return 0;
}
