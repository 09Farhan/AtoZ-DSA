#include<bits/stdc++.h>
using namespace std;

bool possible(vector<int> &arr, int day, int m, int k){
    int n = arr.size();
    int cnt = 0;
    int noOfB = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] <= day){
            cnt++;
        }else{
            noOfB += (cnt/k);
            cnt = 0;
        }
    }
    noOfB += (cnt/k);
    return noOfB >= m;
}


int roseGarden(vector<int> &arr, int k, int m){
    long long val = m * 1ll * k * 1ll;
    int n = arr.size(); 
    if (val > n) return -1;
    int mini = INT_MAX, maxi = INT_MIN;
    for (int i = 0; i < n; i++) {
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }
    
    int low = mini, high = maxi;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (possible(arr, mid, m, k)) {
            high = mid - 1;
        }
        else low = mid + 1;
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

    int k;
    cout<<"Enter the number of days: ";
    cin>>k;

    int m;
    cout<<"Enter the number of bouquets: ";
    cin>>m;

    int ans = roseGarden(arr, k, m);

    if (ans == -1)
        cout << "We cannot make m bouquets.\n";
    else
        cout << "We can make bouquets on day " << ans << "\n";
    return 0;
}
