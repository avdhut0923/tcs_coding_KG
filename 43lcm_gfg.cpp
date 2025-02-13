#include <bits/stdc++.h> 
long long gcd(int a,int b){
  while(b!=0){
    int temp =b;
  b=a%b;
  a=temp;
  }
  return a;
}
long long LCM(int x, int y)
{
  // Write your code here.

  // to save space dont direct use ans=x*y/gcd(x,y)
  long long g=gcd(x,y);
  long long a1=x/g;
  long long ans=a1*y;
  return ans;

}
