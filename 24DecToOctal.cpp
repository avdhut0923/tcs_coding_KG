#include <bits/stdc++.h>
using namespace std;

int main(){
    int dec = 33;
    int arr[32];
    int i=0;
    while(dec>0){
        arr[i]=dec%8;
        i++;
        dec=dec/8;
    }
    for(int j=i-1;j>=0;j--){
        cout<<arr[j];
    }
    
}