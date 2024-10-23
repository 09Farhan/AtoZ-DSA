#include<bits/stdc++.h>
using namespace std;

int findPeakEle(vector<int> &arr, int n){

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
    int ind = findPeakEle(arr, n);

    cout<<"The peak element in the array is at the index "<<ind<<endl;

    return 0;
}