#include <bits/stdc++.h>
using namespace std;

unsigned int fact(unsigned int n ){
    if (n==0 ||n==1) return 1;
    return n*fact(n-1);
}

int main(){
    int n=6;
    unsigned int k= fact(n);
    cout<<"facotrial of "<<n<<"is"<<k;
}