#include <bits/stdc++.h>
using namespace std;

int  setbits(int n){
    if (n==0) return 0 ;
    return (( n & 1 ) +  setbits(n >> 1));
}

int main(){
    int n=23;
    cout<<setbits(n);
}