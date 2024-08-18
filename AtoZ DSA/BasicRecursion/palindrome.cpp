#include<bits/stdc++.h>
using namespace std;

bool palindrome(int i, string& s){
    if(i>=s.length()/2) {
        return true;
    }
    if(s[i]!=s[s.length()-i-1]) {
        return false;
    } 
    return palindrome(i+1, s);
}

int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    if(palindrome(0,s)==1) cout<< "It is a palindrome";
    else cout<<"It is not a palindrome";
    cout<<endl;
    return 0;
}