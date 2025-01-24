#include <bits/stdc++.h>
using namespace std;

int main(){
    int a=4,b=8,c=5,d=32;
    int min=INT_MAX;
    if(a>b)min=b;
    else min=a;

    if(c<min)min=c;
    if(d<min)min=d;
    cout<<"minimum num is "<<min;
}