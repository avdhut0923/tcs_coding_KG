#include <bits/stdc++.h>
using namespace std;

int main(){
    int bin = 10101;
    int dec_ans=0;
    int pow_two=1; //2^0 ==1 
    while(bin>0){
        int temp=bin%10;  // temp stores last digit

        if(temp!=0){
            dec_ans+=(temp)*pow_two;  //optimized dont run for 0 // but gives same ans;
        }
        pow_two=pow_two*2;
        bin=bin/10;
        
    }
    cout<<dec_ans;
}