#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num){
    if(num==0 || num==1)return false; // 1 and 0 are not a prime no.
    for(int  i= 2;i*i<=num;i++){ // similar to i<sqrt(num)
        if(num%i==0)return false;
       
    } 
     return true; 
}

int main(){
    int n1=1;
    int n2=100;
    for(int i=n1+1;i<n2;i++){
        if(isPrime(i))cout<<i<<" ";
    }
}