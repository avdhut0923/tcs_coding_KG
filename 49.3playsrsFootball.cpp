#include <bits/stdc++.h>
using namespace std;

int main(){
    int x=14;//give fisrt chance to x
    int y=8;
    int z=5;
    int cnt1=0,cnt2=0;
    while(z!=1){
        if(x%z==0){
            x--;
            cnt1++;
        }
        else if(y%z==0){
            y--;
            cnt2++;
        }
        else{
            z--;
        }
    }
    cout<<cnt1<<" "<<cnt2;
    return 0;

}