/*Given two numbers N and M, find the Nth root of M. 
The nth root of a number M is defined as a number X when raised to the power N equals M. 
If the 'nth root is not an integer, return -1.*/

#include<bits/stdc++.h>
using namespace std;

int func(int mid, int n, int m){
    long long ans = 1;
    for(int i = 0; i<n; i++){
        ans = ans * mid;
        if(ans > m){
            return 2;
        }
    }
    if(ans == m){
        return 1;
    }
    return 0;
}

int nthRoot(int n, int m){
    int low = 1, high = m;

    while(low <= high){
        int mid = (low + high)/2;
        int midN = func(mid, n, m);
        if(midN == 1){
            return mid;
        }else if(midN == 0){
            low = mid + 1;
        }else {
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the root number: ";
    cin>>n;

    int m;
    cout<<"Enter the number you want to find the root of n: ";
    cin>>m;

    int ans = nthRoot(n, m);

    cout<<"The "<<n<<"th root of"<<m<<" is: "<<ans<<endl;

    return 0;

}
