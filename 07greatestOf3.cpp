#include <bits/stdc++.h>
using namespace std;

int main(){
    int a=4,b=8,c=83;
    int max=INT_MIN;
    if(a>b)max=a;
    else max=b;

    if(c>max)max=c;
    cout<<max;
}