//optimized approach(using map)
#include<bits/stdc++.h>
using namespace std;

void Freq(int arr[], int n){
    unordered_map<int, int> map;

    for(int i =0; i<n; i++){
        map[arr[i]]++;
    }

    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;

    for(auto x : map){
        int cnt = x.second;
        int ele = x.first;

        if(cnt>maxFreq){
            maxEle = ele;
            maxFreq = cnt;
        }
        if(cnt<minFreq){
            minEle = ele;
            minFreq = cnt;
        }
    }
    cout<<"The highest frequency element is: "<<maxEle<<"\n";
    cout<<"The lowest frequency element is: "<<minEle<<"\n";
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>> n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    int a = sizeof(arr) / sizeof(arr[0]);
    Freq(arr, a);
    return 0;
}