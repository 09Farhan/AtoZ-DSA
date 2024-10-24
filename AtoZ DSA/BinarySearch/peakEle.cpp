#include<bits/stdc++.h>
using namespace std;

int findPeakEle(vector<int> &arr, int n){
    if (n == 1) return 0;
    if (arr[0] > arr[1]) return 0;
    if (arr[n - 1] > arr[n - 2]) return n - 1;

    int low = 1, high = n - 2;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]){
            return mid;
        }
        if (arr[mid] > arr[mid - 1]) {
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    return -1;
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
    int ind = findPeakEle(arr, n);

    cout<<"The peak element in the array is at the index "<<ind<<endl;

    return 0;
}
