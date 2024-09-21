/*Given an array, print all the elements which are leaders. A Leader is an element 
that is greater than all of the elements on its right side in the array.*/

#include<bits/stdc++.h>
using namespace std;

vector<int> printLeader(int arr[], int n){
    vector<int> ans;
    int max = arr[n-1];
    ans.push_back(arr[n-1]);

    for(int i = n-2; i>= 0; i --){
        if(arr[i]> max){
            ans.push_back(arr[i]);
            max = arr[i];
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }

    vector<int> ans = printLeader(arr, n);
    for(int i = ans.size()-1; i >= 0 ; i--){
        cout<<ans[i]<<" ";
    }
    
    return 0;
}