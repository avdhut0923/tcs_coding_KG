#include <bits/stdc++.h> //0.123ms
using namespace std;

int main(){
    int n=16;
    int count =1;
    while(n>0){
        if((n & 1)== 1){
            break;
        }
        n=n>>1;
        count++;
    }
    cout<<count;
}