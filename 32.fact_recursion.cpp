#include <bits/stdc++.h>
using namespace std;

long long unsigned int fact(int n){
    if(n==0 || n==1)return 1;
    return n*fact(n-1);
}

int main(){
    int n=21;
    long long unsigned int ans = fact(n);
    cout<<ans;
}