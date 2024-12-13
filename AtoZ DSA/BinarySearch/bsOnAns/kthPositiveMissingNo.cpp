#include<bits/stdc++.h>
using namespace std;

int missingK(vector<int> &arr, int n, int k){
    int low = 0, high = n-1;

    while(low <= high){
        int mid = (low + high) / 2;
        int missing = arr[mid] - (mid + 1);
        if(missing < k){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return k + high + 1;
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
    cout<<"Enter the starting integer to search from: ";
    cin>>k;

    int ans = missingK(arr, n, k);

    cout<<"The missing number is: "<<ans<<endl;

    return 0;
}