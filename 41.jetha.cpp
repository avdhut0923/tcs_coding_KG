#include <bits/stdc++.h> //0.123ms
using namespace std;

int main(){
    int l=6; // l no. of bits to store max num i.e 2^l = 2^6 = 64
    int i=12; // starts form ith shop 
    // tell no. of shops to visit ahead
    int ans = pow(2,l)-i;
    cout<<ans;
    
}