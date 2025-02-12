#include <bits/stdc++.h> //0.123ms
using namespace std;

void findrightmostOne(int a){
    cout<<log2(a & -a) +1;
}
int main(){
    int n=16;
    int m=12;
    int x_or=m^n;
    findrightmostOne(x_or);
}