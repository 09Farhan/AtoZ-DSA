#include<bits/stdc++.h>
using namespace std;

int removeDup(int arr[], int n){
    set<int> st;
    for(int i =0; i<n; i++){
        st.insert(arr[i]);
    }
    int index=0;
    for(auto it : st){
        arr[index] = it;
        index++;
    }
    return index;
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int remove = removeDup(arr,n);
    cout<<"Array after removing duplicates: ";
    for(int i = 0; i<remove; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
