/*You are given an array of integers 'arr' and an integer i.e. a threshold value 'limit'. Your task is to find the smallest positive integer divisor,
such that upon dividing all the elements of the given array by it, the sum of the division's result is less than or equal to the given threshold value.*/

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
    int n = arr.size();
    if(n > limit){
        return -1;
    }
    int low = 1, high = *max_element(arr.begin(), arr.end());
    while(low <= high){
        int mid = (low + high)/ 2;
        if(sumByD(arr, limit) <= limit){
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

    int limit;
    cout<<"Enter the limit: ";
    cin>>limit;

    int ans = smallestDivisor(arr, limit);

    cout<<"The minimum Divisor is: "<<ans<<endl;
    return 0;
}
