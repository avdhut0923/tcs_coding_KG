#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cout<< " enter a and b to find gcd "<<endl;
    cin>>a>>b;
    int min=INT_MAX;
    if(a<b){
        min=a;
    }
    else min=b;
    int gcd=0;
    for(int i=1;i<=min;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    cout<<"gcd of "<<a<<" and "<<b<<" is "<<gcd;
}