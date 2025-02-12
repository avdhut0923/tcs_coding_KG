#include <bits/stdc++.h> //0.123ms
using namespace std;

bool isleap(int n){
    if(n%400==0)return true;
    else if(n%100==0)return false;
    else if(n%4==0)return true;
    else return false;
}

int main(){
  int n=2000;
  if(isleap(n))cout<<"leap year";
  else cout<<"not leap year";
}