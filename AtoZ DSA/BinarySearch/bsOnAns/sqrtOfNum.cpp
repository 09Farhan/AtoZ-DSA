#include<bits/stdc++.h>
using namespace std;

int findSqrt(int n){
    int low = 1, high = n;
    while (low <= high){
        long long mid = (low + high) / 2;
        long long val = mid * mid;

        if(val <= (long long)(n)){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return high;
}

int main(){
    int n;
    cout<<"Enter the number you want to find the square root of: ";
    cin>>n;

    int ans = findSqrt(n);

    cout<<"The square root of the number is: "<<ans<<endl;

    return 0;
}
