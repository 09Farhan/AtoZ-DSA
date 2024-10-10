/*You are given a sorted array containing N integers and a number X,
 you have to find the occurrences of X in the given array.*/

 #include<bits/stdc++.h>
 using namespace std;
 
 int numOfOccur(vector<int> &arr, int n, int x){

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

    int ans = numOfOccur(arr,n,x);

    cout<<"The number of times "<<x<<" occurs is: "<<ans<<endl;

    return 0;
 }