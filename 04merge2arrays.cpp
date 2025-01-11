#include <bits/stdc++.h>
using namespace std;

void mergesort(int arr1[],int arr2[],int n1,int n2){
    int i,j,k;
    i=j=k=0;
    int len=n1+n2;
    int arr3[len];
    for(int i=0;i<n1 && i<n2;){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<n1){
       arr3[k]=arr1[i];
            k++;
            i++; 
    }
     while(j<n2){
        arr3[k]=arr2[j];
            k++;
            j++;
      
    }

    for(int i=0;i<len;i++){
        cout<<arr3[k]<<" ";
    }

}

int main(){
    int arr1[]={1,2,6,8};
    int arr2[]={3,4,5,7,9};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    
    mergesort(arr1,arr2,n1,n2);
}