#include<bits/stdc++.h>
using namespace std;

void print1(int n){
    for(int i =0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print2(int n){
    //for the outer loop
    for(int i = 0; i<n; i++){
        for(int j =0;j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    
}
void print3(int n){
    for(int i=1; i<=n; i++){
        for(int j = 1; j<=i;j++){
            cout<<j <<" ";
        }
        cout<<endl;
    }
}
void print4(int n){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void print5(int n){
    for(int i = 1; i<=n; i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print6(int n){
    for(int i =1; i<=n; i++){
        for(int j =1; j<=n-i+1; j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void print7(int n){
    //for inner loop
    for (int i = 1; i<=n; i++){
        //we need three inner loops for space, stars and again space
        //for space
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        //for stars
        for(int j=1; j<=2*i - 1; j++){
            cout<<"*";
        }
        //for space
         for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void print8(int n){
    //for inner loop
    for (int i = 0; i<n; i++){
        //we need three inner loops for space, stars and again space
        //for space
        for(int j=0; j<=i; j++){
            cout<<" ";
        }
        //for stars
        for(int j=1; j<=2*n - (2*i + 1); j++){
            cout<<"*";
        }
        //for space
         for(int j=1; j<=i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void print9(int n){
     for(int i=0; i<n; i++){
        //for space
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //for stars
        for(int j=0; j< 2*i+1; j++){
            cout<<"*";
        }
        //for space
        for(int j=0; j<n-i-1;j++){
            cout<<"";
        }
        cout<<endl;
    }
    //for inverted diamond
    for(int i=0; i<n; i++){
        //for space
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        //for stars
        for(int j=0; j<2*n - (2*i+1); j++){
            cout<<"*";
        }
        //for space
        for(int j=0; j<i; j++){
            cout<<"";
        }
        cout<<endl;
    }
}
void print10(int n){
    for(int i =0; i<2*n-1; i++){
        int stars = i;
        if(i>n){
            stars = 2*n - i;
        }
        for(int j = 1; j<=stars; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print11(int n){
    int start = 0;
    for(int i = 0; i<n; i++){
        if(i%2 == 0) start = 1;
        else start = 0;
        //the inner loop
        for(int j =0; j<=i; j++){
            cout<<start;
            start = 1-start;
        }
        cout<<endl;
    }
}
void print12(int n){
     for(int i =1; i<=n; i++){
        //for numbers
        for(int j = 1; j<=i; j++){
            cout<<j;
        }
        //for spaces
        for(int j = 1; j<=2*n - 2*i; j++){
            cout<<" ";
        }
        //for numbers
        for(int j = i; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
     }
}
void print13(int n){
    int num =1;
    for(int i =1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}
void print14(int n){
    for(int i = 0; i<n; i++){
        for(char ch = 'A'; ch <='A' + i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print15(int n){
    for(int i = 0; i< n; i++){
        for(char ch = 'A'; ch <= 'A'+(n-i-1); ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print16(int n){
    
    for(int i=0; i<n; i++){
        char ch = 'A' + i;
        for(int j=0; j<=i; j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void print17(int n){
   for (int i = 1; i<=n; i++){
        //we need three inner loops for space, stars and again space
        //for space
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        //for alphabets
        char ch ='A';
        for(int j=1; j<=2*i - 1; j++){
            cout<<ch;
            if(j<= (2*i-1)/2) ch++;
            else ch--;
        }
        //for space
         for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
void print18(int n){
    for (int i=0; i<n; i++){
        char ch = 'E';
        for(int j=ch-i; j<= i; j++){
            cout<<ch;
        }
        cout<<endl;
    }
}
void print19(int n){
    int iniS = 0;
    for(int i=0; i<=n; i++){
        //stars
            for(int j=1; j<=n-i;j++){
                cout<<"*";
            }
        //space
        for(int j=0; j<iniS; j++){
            cout<<" ";
        }
        //star
        for(int j=1; j<=n-i;j++){
            cout<<"*";
        }
        
        iniS +=2;
        cout<<endl;
    }
    iniS = 2*n-2;
    for(int i=1; i<=n; i++){
        //stars
            for(int j=1; j<=i;j++){
                cout<<"*";
            }
        //space
        for(int j=0; j<iniS; j++){
            cout<<" ";
        }
        //star
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        
        iniS -=2;
        cout<<endl;
    }
}
void print20(int n){
    int space = 2*n-2;
    for(int i =1; i<=2*n-1; i++){
        int stars = i;
        if(i>n) stars = 2*n-i;
         //for stars
        for(int j=1; j<=stars; j++){
            cout<<"*";
        }
        //for space
        for (int j =1; j<=space; j++){
            cout<<" ";
        }
        //for stars
        for(int j=1; j<=stars; j++){
            cout<<"*";
        
        }
        cout<<endl;
        if(i<n) space-=2;
        else space+=2;
    }
}
void print21(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0||j==0||i == n-1 || j == n-1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void print22(int n){
    for(int i=0; i<2*n-1; i++){
        for(int j = 0; j< 2*n-1; j++){
            int top = i;
            int left = j;
            int right = (2*n - 2) - j;
            int down = (2*n -2 ) - i;
            cout<<(n- min(min(top,down), min(left, right)));
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    print22(n);
    return 0;
}
