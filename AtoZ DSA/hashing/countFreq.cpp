#include<bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n){
    unordered_map<int, int> map;
    for(int i =0; i<n;i++){
        map[arr[i]]++;
    }
    for(auto x : map){
        cout<<x.first<<" "<<x.second<<endl;
    }
}
//the code is working only if the array is defined before hand and not when the array is taken from the user
int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    // int arr[] = {2, 2, 2, 1, 1};
    int a = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, a);
    return 0;
}