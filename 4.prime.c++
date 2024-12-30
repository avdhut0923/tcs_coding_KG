#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=23;
    int cnt=0;
    for(int i=1;i<=n;i++){
                                  //    int cnt=0; declared here always couts only for first ieteration
        if(n%i==0) 
        cnt++;                          
    }
    if(cnt==2)
    {cout<<"given number is prime anc its sq root is ";
     cout << fixed << setprecision(2) << sqrt(n) << endl;}
    else
     {cout<<"given number is not prime"<<endl;}
}