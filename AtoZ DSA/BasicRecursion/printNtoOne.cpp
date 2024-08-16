#include<bits/stdc++.h>
using namespace std;

void printNtoOne(int i, int n){
    if(i<1) return;
    cout<<i<<" ";
    printNtoOne(i-1, n); 
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    printNtoOne(n,1);
    return 0;
}