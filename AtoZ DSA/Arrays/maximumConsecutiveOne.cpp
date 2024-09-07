#include<bits/stdc++.h>
using namespace std;

int maxConsOne(int arr[], int n){
    //take the variable cnt and maximum and make sure to assign 0 else the code won't work
    int cnt = 0; 
    int maxi = 0;
    for(int i =0; i<n; i++){
       if(arr[i] == 1){
        cnt++;
       }else{
        cnt = 0;
       }
       maxi = max(maxi, cnt);
    }
    return maxi;
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int max = maxConsOne(arr, n);
    cout<<"Maximum consecutive 1's are : "<<max<<endl;
    return 0;
}