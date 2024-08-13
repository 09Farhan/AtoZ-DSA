#include<bits/stdc++.h>
using namespace std;

void printName(int n){
    if(n==0) return;
    printName(n-1);
    cout<<"Farhan"<<" ";
}
int main(){
    int n;
    cout<<"Enter number of times to print the name: ";
    cin>> n;
    printName(n);
    return 0;
}