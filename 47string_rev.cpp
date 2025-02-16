#include <bits/stdc++.h>
using namespace std;

int main(){
    string str="jai Shree Ram";
  
    int i=0;
    int j=str.length()-1;
    while(i<j){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    cout<<str;
}