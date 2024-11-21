#include<bits/stdc++.h>
using namespace std;

bool possible(vector<int> &arr, int day, int m, int k){

}


int roseGarden(vector<int> &arr, int k, int m){

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