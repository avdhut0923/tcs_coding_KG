#include <bits/stdc++.h>
using namespace std;

int main(){
    int dec = 2545;
    char hexa[32];  // to store character array 
    int i=0;
    while(dec>0){
        int temp=0;
        temp = dec%16;
        if(temp<10){
            hexa[i]=temp + 48 ;// storing ascii values
            i++;
        }
        else  // temp>=10 10 A  11 B  12 C  13 D  14 E  15 F
        {
            hexa[i]=temp + 55;
            i++;

        }
        dec=dec/16;

    }
    for(int j=i-1;j>=0;j--){
        cout<<hexa[j];
    }
   
}