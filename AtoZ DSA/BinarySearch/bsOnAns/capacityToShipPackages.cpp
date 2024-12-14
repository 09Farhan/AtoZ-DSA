#include<bits/stdc++.h>
using namespace std;

int findDays(vector<int> &weights, int cap) {
    int days = 1; 
    int load = 0;
    int n = weights.size(); 
    for (int i = 0; i < n; i++) {
        if (load + weights[i] > cap) {
            days += 1; 
            load = weights[i];
        }
        else {
            load += weights[i];
        }
    }
    return days;
}

int leastWeightCapacity(vector<int> &weights, int d) {
    int low = *max_element(weights.begin(), weights.end());
    int high = accumulate(weights.begin(), weights.end(), 0);
    while (low <= high) {
        int mid = (low + high) / 2;
        int numberOfDays = findDays(weights, mid);
        if (numberOfDays <= d) {
            high = mid - 1;
        }
        else {
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

    int d;
    cout<<"Enter the number of days: ";
    cin>>d;

    int ans = leastWeightCapacity(arr, d);

    cout<<"The minimum capacity should be: "<<ans<<endl;

    return 0;
}