#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n=153;
    int og=n;
    int nofd=floor(log10(n))+1;
    int sum=0;
    // int d=0;
    while(n>0){
        // d=n%10;
        sum=sum+(pow(n%10,nofd));
        cout<<sum<<" ";
        n=n/10;
    }
    if(sum==og)cout<<"true";
    else cout<<"false";
}

// compilar promblem
// works in online compilar