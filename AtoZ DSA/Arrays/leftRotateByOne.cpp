#include<bits/stdc++.h>
using namespace std;

vector<int> rotateByOne(vector<int> &arr, int n){
    int temp = arr[0];
    for(int i = 1; i<n; i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
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
    vector<int> rotatedArr = rotateByOne(arr,n);
    cout<<"The rotated array is : " << endl;
    for(int i = 0; i<n; i++){
        cout<<rotatedArr[i]<<" ";
    }
    return 0;
}