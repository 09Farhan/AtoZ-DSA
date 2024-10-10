#include<bits/stdc++.h>
using namespace std;

int firstOccurrence(vector<int> &arr, int n, int k) {
    int low = 0, high = n - 1;
    int first = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == k) {
            first = mid;
            high = mid - 1;
        }
        else if (arr[mid] < k) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return first;
}

int lastOccurrence(vector<int> &arr, int n, int k) {
    int low = 0, high = n - 1;
    int last = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == k) {
            last = mid;
            low = mid + 1;
        }
        else if (arr[mid] < k) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return last;
}


pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) {
    int first = firstOccurrence(arr, n, k);
    if (first == -1) {
        return { -1, -1};
        cout<<"Element not found in the array.";
    }
    int last = lastOccurrence(arr, n, k);
    return {first, last};
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the sorted array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the target to find the last occurrence of: ";
    cin>>x;

    pair<int, int> ind =  firstAndLastPosition(arr, n, x);
    cout<<"The first and last occurrence of the target element is: "<<ind.first<<", "<<ind.second <<endl;
    return 0;
}
