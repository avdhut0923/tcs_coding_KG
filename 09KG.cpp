#include <bits/stdc++.h>
using namespace std;

int main(){
    int a=4,b=8,c=5;
    int sec_large=INT_MIN;
    if(a>b && a>c) // a is largest
    {
        if(b>c)sec_large=b;
        else sec_large=c ; // c>b
    }
    else if(b>c && b>a )// b is largest
    { 
       if(c>a)sec_large=c;
       else sec_large=a;

    }
    else // c is largest
    {
        if(a>b)sec_large=a;
        else sec_large=b;
    }
    cout<<sec_large;
   
}