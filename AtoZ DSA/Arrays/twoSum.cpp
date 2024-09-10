//Check if a pair with given sum exists in Array
#include<bits/stdc++.h>
using namespace std;

string getTwoSum(int n, vector<int> &arr ,int k){
    sort(arr.begin(), arr.end());
    int left = 0, right = n-1;
    while(left<right){
        int sum = arr[left] + arr[right];
        if(sum == k){
            return "YES";
        }else if(sum < k){
            left++;
        }else right--;
    }
    return "NO";
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
    cout<<"Enter the target to search for: ";
    cin>>k;

    string ans = getTwoSum(n, arr ,k);
    cout<<"This is the answer for the variant 1: "<<ans<<endl;
    return 0;
}