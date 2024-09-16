//printing the maximum sub array
#include<bits/stdc++.h>
using namespace std;

void maxSumSubArr(int arr[], int n, int &start, int &end, long long &maxSum){
    long long maxi = LONG_MIN;
    long long sum = 0;
    int temp_start = 0;

    for(int  i = 0; i<n; i++){
        if(sum == 0){
           temp_start = i;
        }
        sum += arr[i];
        
        if(sum> maxi){
            maxi = sum;
            start = temp_start;
            end = i;
            maxSum = maxi;
        }

        if(sum < 0){
            sum = 0;
        }
    }
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

    int start, end;
    long long maxSum;
    maxSumSubArr(arr, n, start, end, maxSum);

    cout<<"The maximum Sub-Array sum is: "<< maxSum<<endl;
    cout<<"The maximum Sub-Array is: ";
    for(int i = start; i <= end; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0; 
}