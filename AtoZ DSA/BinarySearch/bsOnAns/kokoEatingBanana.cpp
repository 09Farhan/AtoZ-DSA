/*A monkey is given ‘n’ piles of bananas, whereas the 'ith' pile has ‘a[i]’ bananas.
An integer ‘h’ is also given, which denotes the time (in hours) for all the bananas to be eaten.*/
#include<bits/stdc++.h>
using namespace std;

int findMax(vector<int> &v, int n){
    
}

int calculateTotalHours(vector<int> &v, int n, int hourly){
    int totalH = 0;

    for(int i = 0; i<n; i++){
        totalH += ceil((double)(v[i]) / (double)(hourly));
    }
    return totalH;
}

int minRateToEatBanana(vector<int> &arr, int n, int h){
     int low = 1, high = findMax(v);

    while(low <= high){
        int mid = (low + high) / 2;

        int totalH = calculateTotalHours(v, mid);

        if(totalH <= h){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return low;
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
