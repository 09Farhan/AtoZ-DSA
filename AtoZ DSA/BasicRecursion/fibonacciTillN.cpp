//nth fibonacci
#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n <= 1) {
        return n;
    }
    int last = fibonacci(n-1);
    int slast= fibonacci(n-2);
    return last + slast;
}
int main(){
    int n;
    cout<<"Enter the position of fibonacci number: ";
    cin>>n;
    for(int i = 0; i<n; i++){
        cout<<fibonacci(i)<<" ";
    }
    
    return 0;
}