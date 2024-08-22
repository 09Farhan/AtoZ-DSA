#include <bits/stdc++.h>
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
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    int q;
    cout<<"Enter the number of times you want to search: ";
    cin >> q;
    while (q--) {
        int number;
        cout<<"Enter the number you want to search: ";
        cin >> number;
        // fetching:
        cout << mp[number] << endl;
    }
    return 0;
}