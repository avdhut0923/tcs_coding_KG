#include <bits/stdc++.h>
using namespace std; 

int main(){
    int arr[]={3,3,4,4,66,66,66,78,87,87,90,90};
    int n= sizeof(arr)/sizeof(arr[0]);
    int k=90;
    int first_index=-1;
    int last_index=-1;
    for(int i=0;i<n;i++){
        if(k!=arr[i])continue;

        if(first_index== -1){
            first_index=i;
        }       
        last_index=i;
    }
    if(first_index!= -1){
        cout<<"first index : "<<first_index<<endl;
        cout<<"last index : "<<last_index;
    }
    else{
        cout<<"no occurances";
    }   
}