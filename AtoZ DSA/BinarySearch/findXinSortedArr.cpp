#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& nums, int low, int high, int target) {

    if (low > high) {
        return -1;
    }
    int mid = (low + high) / 2;
    if (nums[mid] == target){
        return mid;
    }else if (target > nums[mid]){
        return binarySearch(nums, mid + 1, high, target);
    }
    return binarySearch(nums, low, mid - 1, target);
}

int search(vector<int>& nums, int target) {
    return binarySearch(nums, 0, nums.size() - 1, target);
}

int main()
{
    int n;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter the target to search for: ";
    cin>>target;
    int ind = search(arr, target);
    if (ind == -1) cout << "The target is not present." << endl;
    else cout << "The target is at index: "
                  << ind << endl;
    return 0;
}