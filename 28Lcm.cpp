#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(a==0)
     return b;
    return gcd(b%a,a) ;
}

void lcm(int a, int b){
    int ans = a*b/gcd(a,b); // all are integers so no worries
    cout<<"LCM of "<< a<<" and "<<b<<" is "<<ans;
}

int main(){
    int a=12;
    int b=6;
    lcm(a,b);
}