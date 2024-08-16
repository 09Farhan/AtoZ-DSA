#include<bits/stdc++.h>
using namespace std;
int printFactorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    return fact;

}
int main(){
    int n;
    cout<<"Enter the numbers: ";
    cin>>n;
    cout<<"The factorial of "<<n<<" numbers is: "<<printFactorial(n);
    return 0;
}