#include <bits/stdc++.h> 
int countdiv(int a){
    int cd=0;  //countdiv
    int ans=a+1;
    for(int i=2;i<=sqrt(a);i++){
        if(a%i==0  && i!=a/i){
            cd=cd+2;
        }
        else if((a%i==0) && (i=a/i)){
            cd++;
        }
        if(cd>2)return 0;//optimized code by 12% reached 98%
    }
    
    if(cd==2){
        
      for(int i=2;i<=sqrt(a);i++){
          if(a%i==0){
              ans=ans+i+a/i;
              break;
          }
      }
      return ans;
    }
    else return 0;
    
}
int sumFourDivisors(vector<int> &arr, int n)
{
    // Write your code here.
    int final_ans=0;
    for(int i=0;i<n;i++){
       final_ans+= countdiv(arr[i]);
    }
    return final_ans;
}
