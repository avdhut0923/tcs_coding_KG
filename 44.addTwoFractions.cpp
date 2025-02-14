#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
   while(b!=0){
     int temp=b;
    b=a%b;
    a=temp;
   }
   return a;
}

int main(){
    int n1=2;
    int d1=3;
    int n2=4;
    int d2=3;
    int nur =n1*d2 +d1*n2;//numerator
    int der=d1*d2; //denomerator
    int numo=(nur/gcd(nur,der));
    int deno=(der/gcd(nur,der));
    cout<<numo<<"/"<<deno;
}