#include <bits/stdc++.h> //0.123ms
using namespace std;

int main(){
    int n=16;
    int ans = log2(n & -n) +1;
    cout<<ans;
}