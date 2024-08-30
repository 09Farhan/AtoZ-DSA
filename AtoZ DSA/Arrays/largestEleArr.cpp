#include <bits/stdc++.h>
using namespace std;

//brute force approach
int sortArr(vector<int> &arr){
    sort(arr.begin(), arr.end());
    return arr[arr.size()-1];
}

int main(){
    
    /*int n;
    cout<<"Enter the elements of the array: ";
    cin>>n;  
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int j = 0; j<n; j++){
    cin>>arr[i];
    }  
    cout<<"The largest element of the array is: "<<sortArr(arr);
    return 0;*/
    vector<int> arr1 = {2,5,1,3,0};
    vector<int> arr2 = {8,10,5,7,9};
   
    cout<<"The Largest element in the array is: "<<sortArr(arr1)<<endl;
    cout<<"The Largest element in the array is: "<<sortArr(arr2);
   
    return 0;
}