#include <bits/stdc++.h>
using namespace std;

int main(){
    int a=4,b=8,c=5;
    int min=INT_MAX;
    int sec_min=INT_MAX;
    if(a<b){
        sec_min=b;
        min=a;        
    }
    else{
        sec_min=a;
        min=b;
    }
    if(c<min){
        sec_min=min;
        min=c;
    }
    if(c<sec_min && c!=min){
        sec_min=c;
    }

    cout<<sec_min;
   
}