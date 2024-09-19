/*Given an array Arr[] of integers, rearrange the numbers of the given array into the lexicographically next greater permutation of numbers.
If such an arrangement is not possible, it must rearrange to the lowest possible order (i.e., sorted in ascending order).*/
//optimal using recursive function

#include<bits/stdc++.h>
using namespace std;

vector<int> nextPermutation(vector<int> &arr, int n){
    //break-point
    int ind = -1;
    for(int i = n-2; i>=0; i--){
        if(arr[i]<arr[i+1]){
            ind = i;
            break;
        }
    }
    //if breakpoint does not exist reverse the array
    if(ind == -1){
        reverse(arr.begin(), arr.end());
        return arr;
    }
    //if break-point exists
    //next greater element
    for(int i = n-1; i>ind; i--){
        if(arr[i]>arr[ind]){
            swap(arr[i], arr[ind]);
            break;
        }
    }
    //reverse the right half
    reverse(arr.begin()+ind+1, arr.end());
    return arr;
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

    vector<int> ans = nextPermutation(arr, n);

    cout<<"The next permutation is: [";
    for(auto it : ans){
        cout<< it<<" ";
    }
    cout<< "]\n";
    return 0;
}