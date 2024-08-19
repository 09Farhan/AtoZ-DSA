#include<bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout<<"Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //precomputing:
    int hash[13] = {0};
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }
    int q;
    cout<<"How many times you want to check the numbers for?: ";
    cin>>q;
    while(q--){
        int number;
        cout<<"Enter the number you want to check for: ";
        cin >> number;
        // fetching:
        cout << hash[number] << endl;    
    }
    return 0;
}