//sum of all the divisors
#include<bits/stdc++.h>
using namespace std;

int printDivisor(int n){
    int sum =0;
    for(int i = 1; i<=n; i++){
        sum+= (n/i)*i;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<< printDivisor(n);
    return 0;
}