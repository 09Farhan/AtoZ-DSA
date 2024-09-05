#include<bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int num){
    for(int i=0; i<n; i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
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
   int num;
    cout<<"Enter the number you want to search: ";
    cin>>num;

    int result = search(arr, n, num); 
    cout<<"The index of the number you searched for is: "<< result << endl;
    return 0;
}