#include <bits/stdc++.h>
using namespace std;

int main(){
    int a=0;
    int b=1;
    int n=9;
    // int ans;
    if(n==0)cout<<a; // at 0th index 
    if(n==1) cout<<b; // at 1st index ...
    for(int i=2;i<=n;i++){ // we have n+1 terms // so we go from 0 to n
        int temp = b;
               b = b+a;
               a = temp;
    }
    cout<<b;
}