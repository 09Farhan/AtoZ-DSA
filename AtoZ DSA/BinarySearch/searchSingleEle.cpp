#include<bits/stdc++.h>
using namespace std;

int searchSingleEle(vector<int> &arr, int n){
    if(n == 1){
        return 0;
    }
    if(arr[0] != arr[1]){
        return arr[0];
    }
    if(arr[n - 1] != arr[n - 2]){
        return arr[n - 1];
    }

    int low = 0, high = n - 2;
    while(low <= high){
        int mid = (low + high) / 2;

        if(arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1]){
            return arr[mid];
        }
         if ((mid % 2 == 1 && arr[mid] == arr[mid - 1])|| (mid % 2 == 0 && arr[mid] == arr[mid + 1])) {
            low = mid + 1;
        }else{
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
    int ans = searchSingleEle(arr, n);

    cout<<"The single element is: "<<ans<<endl;

    return 0;
}