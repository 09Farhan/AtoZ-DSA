#include<bits/stdc++.h>
using namespace std;
bool primeNo(int n){
    int cnt = 0;
	for (int i = 1; i <= sqrt(n); i++){
          if (n % i == 0) {
            cnt++;
            if (n / i != i) cnt++;
        }
    }
	return (cnt == 2)? true: false;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(primeNo(n)== true ){
        cout<<n<<" is a prime number";
    }else{
        cout<<n<<" is not a prime number";
    }
    return 0;
}