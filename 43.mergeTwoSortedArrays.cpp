#include <bits/stdc++.h> //0.123ms
using namespace std;

int main(){
    int arr1[]={1,3,3,5,6,6};
    int arr2[]={2,2,4,4,7};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int n3=n1+n2;
    int arr3[n3];
    int i=0;
    int j=0;
    int k=0;
    for(k=0; i<n1 && j<n2 ;){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else   // arr1[i]>arr2[j]
        {
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
    while (j<n2)
    {
        arr3[k]=arr2[j];
        k++;
        j++;
    }
    for(int k=0;k<n3;k++){
        cout<<arr3[k]<<" ";
    }
    

}