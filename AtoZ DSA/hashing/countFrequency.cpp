#include<bits/stdc++.h>
using namespace std;

void countFrequency(int arr[], int n){
    vector<bool> visited(n,false);
    for(int i =0; i<n; i++){
        if(visited[i]==true){
            continue;
        }
        int count = 1;
        for(int j = i+1; j<n; j++){
            if(arr[i]==arr[j]){
                visited[j] = true;
                count++;
            }
        }
         cout<< arr[i]<< " "<<count<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    // int arr[] = {2, 2, 2, 1, 1};
    int q = sizeof(arr) / sizeof(arr[0]);
    countFrequency(arr,q);
    return 0;
}