#include <bits/stdc++.h>
using namespace std;

int countdiv(int a){
    if(a==1)return 1;
    int count=2; // as 1 is never in ans count=2 for 1st = 1 and 2nd = no.itself

    for(int i=2;i<=sqrt(a);i++){
        if((a%i==0)  &&  (i != a/i)){
            count =count+2  ; // one divisor is i and other is n/i 
        }
        else if((a%i==0) &&  (i==a/i)){
            count++;
        }

    }
    return count;
}

int main(){
    int n=1000;
    for(int i=1;i<=n;i++){
       if(countdiv(i)==9)cout<<i<<" ";
    }

    // cout<<countdiv(100);
    
}