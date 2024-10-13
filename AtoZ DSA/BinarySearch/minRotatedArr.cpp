/*Given an integer array arr of size N, sorted in ascending order (with distinct values). 
Now the array is rotated between 1 to N times which is unknown. 
Find the minimum element in the array. */

#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int> &arr, int n){

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

    int ans =  findMin(arr, n);
    cout<<"The minimum element is: "<<ans<<endl;

    return 0;
}