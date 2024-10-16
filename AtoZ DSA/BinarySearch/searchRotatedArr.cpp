/* Given an integer array arr of size N, sorted in ascending order (with distinct values) and a target value k.
Now the array is rotated at some pivot point unknown to you.
Find the index at which k is present and if k is not present return -1.*/

#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& arr, int n, int k) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == k) return mid;

        if (arr[low] <= arr[mid]) {
            if (arr[low] <= k && k <= arr[mid]) {
                high = mid - 1;
            }
            else {
               low = mid + 1;
            }
        }
        else {
            if (arr[mid] <= k && k <= arr[high]) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the target value to search for: ";
    cin>>k;

    int ans = search(arr, n, k);
    if (ans == -1)
        cout << "Target is not present."<<endl;
    else
        cout << "The index is: " << ans <<endl;
    return 0;
}
