#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(a==0) return b;
    if(b==0) return a;
    if(a==b) return a;
    if(a>b)  return gcd(a-b,b);
    return gcd(a,b-a);
}

int main(){
    int a=24;
    int b=36;
    cout<< "gcd of a and b is "<< gcd(a,b);
    return 0;

}