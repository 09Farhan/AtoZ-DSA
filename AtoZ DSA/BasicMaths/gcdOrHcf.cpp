#include<bits/stdc++.h>
using namespace std;

int findGcd(int a, int b){
    //continue the loop until both a and b are greater than 0
    while(a > 0 && b> 0){
        //if a is greater than b than subtract b from a and update a
        if(a>b){
            a = a % b;
        }
        else{
            b = b % a;
        }
    }
    if(a==0){
        return b;
    }else{
        return a;
    }
}
int main(){
    int m, n;
    cout<<"Enter two numbers: ";
    cin>>m>>n;
    int gcd = findGcd(m,n);
    cout<<"gcd of "<<m<<" and gcd of "<<n<<" is: "<<gcd<<endl;
    return 0;
}