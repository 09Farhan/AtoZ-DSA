#include<bits/stdc++.h>
using namespace std;

int sumByD(vector<int> &arr, int div){
    int n = arr.size();
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += ceil((double)(arr[i]) / (double)(div));
    }
    return sum;
}

int smallestDivisor(vector<int> &arr, int limit){
    
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

    int limit;
    cout<<"Enter the limit: ";
    cin>>limit;

    int ans = smallestDivisor(arr, limit);

    cout<<"The minimum Divisor is: "<<ans<<endl;
    return 0;
}