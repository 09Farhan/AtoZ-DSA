//you are given an array of prices where prices[i] is the price of a given stock on an ith day.
/* You want to maximize your profit by choosing a single day to buy one stock and choosing a different
 day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0. */

#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices, int n){
    int mini = prices[0];
    int maxPro = 0;
    for(int i = 0; i<n; i++){
        int cost = prices[i] - mini;
        maxPro = max(maxPro, cost);
        mini = min(mini,prices[i]);
    }
    return maxPro;
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
    
    int maximumProfit = maxProfit(arr,n);

    cout<<"maximum profit is "<<maximumProfit<<endl;

    return 0;
}