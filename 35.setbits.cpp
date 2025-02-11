#include <bits/stdc++.h>
using namespace std;

unsigned int countsetBits(int n){
    unsigned int count =0;
    while(n>0){
        n=n & (n-1);
        count++;
    }
    return count;
}

int main(){
    int n=15;
    cout<<countsetBits(n);
}