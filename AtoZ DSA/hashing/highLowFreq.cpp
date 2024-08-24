//brute force approach
#include<bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n){
    vector<bool> visited(n, false);
    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;

    for(int i =0; i<n; i++){
        if(visited[i]==true){
            continue;
        }
        int cnt =1;
        for(int j=0; j<n;j++){
            if(arr[i]==arr[j]){
                visited[j]==true;
                cnt++;
            }
        }
        if(cnt>maxFreq){
            maxEle = arr[i];
            maxFreq = cnt;
        }
        if(cnt<minFreq){
            minEle = arr[i];
            minFreq = cnt;
        }
    }
    cout<<"The highest Frequency Element is: "<<maxEle<<"\n";
    cout<<"The lowest Frequency Element is: "<<minEle<<"\n";

}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n ; i++){
        cin>>arr[i];
    }
    int a =  sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, a);
    return 0;
}