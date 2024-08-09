// Given two integers, n and m. The task is to check the relation between n and m.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cout<<"enter the value of n: ";
    cin>>n;cout<<endl;
    cout<<"enter the value of m: ";
    cin>>m;cout<<endl;
    if(n<m){
        cout<<"lesser than m";
    }else if(n==m){
        cout<<"equal to m";
    }else cout<<"greater than m";
    return 0;
}
