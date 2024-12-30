#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1=1,n2=110;
    int total=0;
    
    for(int i=n1+1;i<n2;i++){
        int ct=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                ct++;
            }
        }
        if(ct==2){
            cout<<i<<" ";
            total++;
        }
    } 
    
    cout<<endl;
    cout<<"total prime nums are"<<total;
}