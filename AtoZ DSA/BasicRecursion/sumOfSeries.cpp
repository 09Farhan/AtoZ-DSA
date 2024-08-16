#include<bits/stdc++.h>
using namespace std;
long long sumOfSeries(long long n){
    if(n==0) {
        return 0;
    }
    long long sum = n*n*n + sumOfSeries(n-1);
    return sum;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The sum of the "<<n<<" series is: "<<sumOfSeries(n);
}