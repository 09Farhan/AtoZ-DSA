#include<bits/stdc++.h>
using namespace std;

pair<int, int> getTwoSum(int n, vector<int> &arr, int k){
    sort(arr.begin(), arr.end());
    int left = 0, right = n-1;
    while(left < right){
        int sum = arr[left] + arr[right];
        if(sum == k){
            return make_pair(left, right);
        }else if(sum < k){
            left++;
        }else{
            right--;
        }
    }
    return make_pair(-1, -1);
}

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int k;
    cout << "Enter the target to search for: ";
    cin >> k;

    pair<int, int> ans = getTwoSum(n, arr, k);
    if(ans.first != -1 && ans.second != -1){
        cout << "The two elements that add up to " << k << " are at indices " << ans.first << " and " << ans.second << endl;
    }else{
        cout << "No such pair found." << endl;
    }
    return 0;
}