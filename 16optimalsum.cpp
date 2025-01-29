#include <bits/stdc++.h> 
using namespace std;

int main(){
   int target_sum;
   cout<<"sum to compare ";
   cin>> target_sum;
  
   int arr[]={2,3,4,1,4,8,9,3};
   int n=sizeof(arr)/sizeof(arr[0]);

   sort(arr,arr+n);
   int low=0;
   int high=n-1;
   bool found=false;
   for(int i=0;i<n;i++){
    int current_sum=arr[low]+arr[high];
    if(current_sum == target_sum){
        cout<<"target sum found : "<<arr[low]<<" + "<<arr[high]<<" = "<<target_sum;
        found = true;
        break;
    }
    else if(current_sum < target_sum){
            low++;
    }
    else if(current_sum > target_sum){
        high--;
    }  
   }
   if(!found){
    cout<<"target sum is not possible in given array ";
   }   
}