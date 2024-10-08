/*Your're given an sorted array of n integers and
an integer x. Find the floor and ceiling of  x in arr [0..n-1]*/

#include<bits/stdc++.h>
using namespace std;

int findFloor(int arr[], int n, int x){
    int low = 0, high = n-1;
    int ans = -1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] <= x){
            ans = arr[mid];
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return ans;
}
int findCeil(int arr[], int n, int x){
    int low = 0, high = n-1;
    int ans = -1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] >= x){
            ans = arr[mid];
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}

pair<int, int> getFloorAndCeil(int arr[], int n, int x){
    int f = findFloor(arr,n, x);
    int c = findCeil(arr, n , x);
    return make_pair(f,c);
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int x;
    cout<<"Enter the element to find the floor and ceiling for: ";
    cin>>x;

    pair<int, int> ans =  getFloorAndCeil(arr,n,x);
    cout<<"The floor of "<<x<<" is "<<ans.first<<" and the ceiling of "<<x<<" is "<<ans.second<<endl;
    return 0;
}