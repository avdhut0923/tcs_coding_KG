#include <bits/stdc++.h>
using namespace std;

bool isperfectsq(int n){
    if(n<0)return false ; // negative num cant be perfect sq 
     
    int root = static_cast<int>(sqrt(n));
    if (n==root*root)return true;
    else return false;
}

int main(){
    int n=25;
    if(isperfectsq(n))cout<<" perfect sq ";
    else cout<<" not a perfect sq";
   
}