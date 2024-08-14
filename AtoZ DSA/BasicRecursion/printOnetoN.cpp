#include<bits/stdc++.h>
using namespace std;

void printOnetoN(int i, int n){
    if(i>n) return;
    cout<<i<<" ";
    printOnetoN(i+1, n);


}

int main(){
    int n;
    cout<<"Enter the numbers: ";
    cin>>n;
    printOnetoN(1,n);
    return 0;
}