#include<bits/stdc++.h>
using namespace std;

bool palindrome(int n){
    int revNum = 0;
    //store a duplicate value
    int dupVal = n;
    //Iterate throuhg digits
    while(n>0){
        int lastDigit = n%10;//extracting the last digit of the number
        revNum = (revNum * 10) + lastDigit;// building the reverse number
        //removing the last digit from the original number
        n = n/10;
    }
    //checking if the reverse number is equal to the original number
    if(dupVal == revNum){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cout<<"Enter the numbers to check Palindrome: ";
    cin>> n;
    if(palindrome(n)== 1){
        cout<<n<<" is a palindrome";
    }else{
        cout<<n<<" is not a palindrome";
    }
}