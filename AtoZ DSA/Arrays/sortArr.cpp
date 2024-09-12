// Given an array consisting of only 0s, 1s, and 2s. Write a program to in-place sort the array without using inbuilt sort functions. ( Expected: Single pass-O(N) and constant space)
#include<bits/stdc++.h>
using namespace std;

void sortArray(vector<int> &arr, int n){

}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elements of array only 0's, 1's and 2's: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    sortArray(arr,n);
    cout<<"After sorting the array: "<<endl;
    for(int i = 0; i<n; i++){
        cout<<arr[i];
    }
    cout<<endl;
    return 0;
}