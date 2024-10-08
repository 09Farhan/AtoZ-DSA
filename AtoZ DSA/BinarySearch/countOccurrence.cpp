/*You are given a sorted array containing N integers and a number X,
 you have to find the occurrences of X in the given array.*/

 #include<bits/stdc++.h>
 using namespace std;
 
int firstOccurrence(vector<int> &arr, int n, int k) {
    int low = 0, high = n - 1;
    int first = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == k) {
            first = mid;
            high = mid - 1;
        }
        else if (arr[mid] < k) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return first;
}

int lastOccurrence(vector<int> &arr, int n, int k) {
    int low = 0, high = n - 1;
    int last = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == k) {
            last = mid;
            low = mid + 1;
        }
        else if (arr[mid] < k) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return last;
}


pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) {
    int first = firstOccurrence(arr, n, k);
    if (first == -1) {
        return { -1, -1};
    }
    int last = lastOccurrence(arr, n, k);
    return {first, last};
}

int count(vector<int> &arr, int n, int x){
    pair<int, int> ans = firstAndLastPosition(arr, n, x);
    if (ans.first == -1) {
        return 0;
    }
    return (ans.second - ans.first + 1);
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

    int x;
    cout<<"Enter the target element to search the occurences for: ";
    cin>>x;

    int ans = count(arr,n,x);

    cout<<"The number of times "<<x<<" occurs is: "<<ans<<endl;

    return 0;
 }
