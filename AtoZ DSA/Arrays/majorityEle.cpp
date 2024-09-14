#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> arr, int n){
    int cnt = 0;
    int ele;

    for(int i = 0; i<n; i++){
        if(cnt == 0){
            cnt = 1;
            ele = arr[i];
        }
        else if(ele == arr[i]){
            cnt++;
        }
        else {
            cnt--;
        }
    }
  
    int cnt1 = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] == ele){
            cnt1++;
        }

        if(cnt1 > (n/2)){
            return ele;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    int majority = majorityElement(arr, n);

    if(majority != -1){
        cout<<"The majority Element is: "<<majority<<endl;
    }else{
        cout<<"No majority Element found."<<endl;
    }
    return 0;
}