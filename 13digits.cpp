#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=257865;
    // int len= floor(log10(n))+1;
    // cout<<len<<endl;
    int arr[100];
    // int d=0;
    int i=0;
    while(n>0){
        arr[i]=n%10;
        n=n/10;
        i++;
    }
    for(int j=i-1;j>=0;j--){  // no need to find len in advance;
        cout<<arr[j]<<" ";
    }
    // for(i=len-1;i>=0;i--){
    //     cout<<arr[i]<< " ";
    // }
   
   
}