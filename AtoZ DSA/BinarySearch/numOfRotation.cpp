#include<bits/stdc++.h>
using namespace std;

int numOfRotation(vector<int> &arr, int n){
    
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

    int ans = numOfRotation(arr, n);

    cout<<"Number of times the array has been rotated is: "<<ans<<endl;

    return 0;

}