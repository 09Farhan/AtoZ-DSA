#include<bits/stdc++.h>
using namespace std;

int naturalSum(int n){
    int sum =0;
    for(int i =1; i<=n; i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>> n;
    cout<<"The sum of "<<n<<" natural number is: "<<naturalSum(n);
    return 0;
}