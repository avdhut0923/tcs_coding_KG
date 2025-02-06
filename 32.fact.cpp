#include <bits/stdc++.h>
using namespace std;

void fact(int n){
    if (n==1 || n==0)cout<<1;
    int ans=1;
    for(int i=n;i>=2;i--){
        ans=ans*i;
    }
    cout<<ans;
}

int main(){
    int n=6;
    fact(n);
}