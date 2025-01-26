#include <bits/stdc++.h>
using namespace std; 

int main(){
    int rows=4;
    int col = 4;
    int count=1;
    for (int i=1;i<=rows;i++){
        for(int j=1;j<=i;j++){
            cout<<count;
        }
        count++;
        cout<<endl;
    }
    count=4;
    for(int i=rows;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<count;
        }
        count--;
        cout<<endl;
    }
}