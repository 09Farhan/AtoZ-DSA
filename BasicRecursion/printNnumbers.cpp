#include<bits/stdc++.h>
using namespace std;

void printNos(int n){
    if(n==0) return;
    printNos(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"Enter the number of numbers to be printed: ";
    cin>> n;
    printNos(n);
    return 0;
}