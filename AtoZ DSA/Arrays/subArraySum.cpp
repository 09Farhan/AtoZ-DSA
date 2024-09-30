#include<bits/stdc++.h>
using namespace std;

int findSubArr(vector<int> &arr, int n, int k){
    map<int, int> mpp;
    int preSum = 0, cnt = 0;

    mpp[0] = 1;
    for(int i = 0; i < n; i++){
        preSum += arr[i];
        
        int remove = preSum - k;

        cnt += mpp[remove];

        mpp[preSum] += 1;
    } 
    return cnt;   
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

    int k;
    cout<<"Enter the target sum: ";
    cin>>k;

    int cnt = findSubArr(arr, n, k);

    cout<<"The number of subarrays is: "<<cnt<<endl;
    
    return 0;
}