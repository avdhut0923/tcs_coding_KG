#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
	bool isbool(int n){
	    if(n==0 || n==1)return false;
	     if (n == 2) return true;  // only even prime number
	     if (n % 2 == 0) return false; // dont check for any even number
	    for(int i=2;i*i<=n;i++){
	        if(n%i==0)return false;
	    }
	    return true;
	}
   	long long int prime_Sum(int n){
   	     long long int sum=0;
   	   for(int i=2;i<=n;i++){
   	       if(isbool(i)){
   	           sum=sum+i;
   	       }
   	   }
   	   return sum;
   	}    
   	    
};
