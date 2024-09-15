/*Given an integer array arr, find the contiguous subarray (containing at least one number)
 which has the largest sum and returns its sum and prints the subarray.*/
#include<bits/stdc++.h>
using namespace std;

long long maxSumSubArr(int arr[], int n){
    long long maxi = LONG_MIN;
    long long sum = 0;

    for(int  i = 0; i<n; i++){
        sum += arr[i];

        if(sum> maxi){
            maxi = sum;
        }

        if(sum < 0){
            sum = 0;
        }
    }
    return maxi;
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    long long maxSum = maxSumSubArr(arr, n);

    cout<<"The maximum Sub-Array sum is: "<< maxSum<<endl;

    return 0; 
}