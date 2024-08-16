#include<bits/stdc++.h>
using namespace std;

bool armstrong(int n){
    int sum =0;
    int m = n;
    int cnt = to_string(n).length();
    while(n>0){
        int lastDigit = n % 10;
        sum = sum + pow(lastDigit,cnt );
           n = n/10;
    }
    return sum == m ? true : false;
    
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(armstrong(n) == 1){
        cout<<n<<" is an armstrong number";
    }
    else cout<<n<< " is not an armstrong number";
    return 0;
}