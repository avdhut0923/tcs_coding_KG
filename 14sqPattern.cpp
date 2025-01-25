#include <bits/stdc++.h> 
using namespace std;

int main(){
    int c=5,r=5; // columns rows 
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            if( i==1 ||  i==r || j==1 || j==c ) //first row // last row // first col // last col
             cout<<1;
            else if(i== (r+1)/2 && j== (c+1)/2)
             cout<<1; // at centre location
            else 
             cout<<0; 
        }
        cout<<endl;
        
    }
   
}