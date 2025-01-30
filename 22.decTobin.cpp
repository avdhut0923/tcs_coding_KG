#include <bits/stdc++.h>
using namespace std;

int main(){
    int dec = 23;
    int arr[32];
    int i=0;
    while(dec>0){
        arr[i++]=dec%2;
        dec=dec/2;       
    }
    for(int j=i-1;j>=0;j--){
        cout<<arr[j];
    }
}