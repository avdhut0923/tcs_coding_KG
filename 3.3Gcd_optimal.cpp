#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
}
int main(){
    int a,b;
    cout<<"enter a and b to find gcd"<<endl;
    cin>>a>>b;
    cout<<gcd(a,b);
}