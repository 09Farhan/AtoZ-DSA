//re-arranging the array in alternating positive and negative signs
#include<bits/stdc++.h>
using namespace std;
vector<int> rearrangeBySign(vector<int> &arr, int n ){
    vector<int> ans(n,0);

    int posIndex = 0, negIndex =1;

    for(int i = 0; i<n; i++){
        if(arr[i]<0){
            ans[negIndex] = arr[i];
            negIndex +=2;
        }else{
            ans[posIndex] = arr[i];
            posIndex +=2;
        }
    }
    return ans;
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

    vector<int> ans = rearrangeBySign(arr, n);
    
    for(int i = 0; i<n; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
