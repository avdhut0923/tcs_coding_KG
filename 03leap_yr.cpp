#include <bits/stdc++.h>
using namespace std;

bool leap(int n){
    if(n%400==0)return 1;
    if(n%100==0)return 0;
    if(n%4==0)return 1;
    return 0;
}

int main(){
   int n=2304;

   leap(n)?cout<<"leap year hai":cout<<"leap year nahi hai";
}