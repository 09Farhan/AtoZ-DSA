#include<bits/stdc++.h>
using namespace std;

int findMax(vector<int> &v, int n){
    
}

int calculateTotalHours(vector<int> &v, int n, int hourly){

}

int minRateToEatBanana(vector<int> &arr, int n, int h){

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

    int h;
    cout<<"Enter the number of hours koko got to eat the bananas: ";
    cin>>h;

    int ans = minRateToEatBanana(arr, n, h);
}