#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=23;
    int count=0;
    while(n){
        count = count + (n & 1);
        n=n/2;
    }
    cout<<count;
}