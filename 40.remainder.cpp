#include <bits/stdc++.h> //0.123ms
using namespace std;


int main(){
    int n1=16;
    int n2=12;
    // int ans=n1/n2; // ans=1 
    int remainder = n1 - (n1/n2)*n2;  //time reduced
    cout<<remainder;
}