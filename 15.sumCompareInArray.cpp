#include <bits/stdc++.h> 
using namespace std;

int main(){
   int target_sum;
   cout<<"sum to compare ";
   cin>> target_sum;

   int size;
   cout<<"size of array ";
   cin>>size;

   int*arr = new int[size];
   cout<<"enter elements of array ";
   for(int i=0;i<size;i++){
    cin>>arr[i];
   }

   bool found = false;
   for(int i=0;i<size-1;i++){
    for(int j=i+1;j<size;j++){
        if(arr[i]+arr[j]==target_sum){
            found=true;
            cout<<" array has two elemnts with target_sum";
            break;
        }
        
    }
    if(found)
     break;

   }
   if(!found)cout<<"not found target_sum";

   delete[] arr; // free up allocated memory 
}