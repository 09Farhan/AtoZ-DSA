//Longest Subarray with sum K | [Postives and Negatives]
#include<bits/stdc++.h>
using namespace std;

int getLongestSubArray(int arr[], int n, int k){
    map<int, int> preSumMap;
    int sum = 0;
    int maxLen = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];

        if(sum == k){
            maxLen = max(maxLen, i+1);
        }
         int rem = sum - k;

        if(preSumMap.find(rem) != preSumMap.end()){
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        if(preSumMap.find(sum) == preSumMap.end()){
            preSumMap[sum] = i;
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

    int ans = getLongestSubArray(arr,n,k);

    cout<<"The length of the longest sub-array is: "<<ans<<endl;
    return 0;
}