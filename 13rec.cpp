// optimal than previous code
#include <bits/stdc++.h> 
using namespace std;

void printdigit(int n){
    if(n==0)return;
    int d=n%10;
    printdigit(n/10);
    cout<<d<<" ";
}

int main(){
    int n=257865;
    printdigit(n);
}