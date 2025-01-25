// ata hai 
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=25;
    int sum=0;
    while(n>0){
        sum = sum + n%10;
        n=n/10;
    }
    cout <<sum;
   
}