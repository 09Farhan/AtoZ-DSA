#include<bits/stdc++.h>
using namespace std;

int  countDigits(int n){
    int cnt = (int)(log10(n)+1);
    return cnt;
}
int main(){
    int n;
    cout<<"Enter the digits: ";
    cin>>n;
    cout<<countDigits(n);
    return 0;
}