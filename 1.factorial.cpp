#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    
    cout<<"enter number to find factorial: "<<endl;
    cin>>n;
    unsigned int  fact=1;

    for(int i=1;i<n;i++){
       fact=fact*i ;
    }
    cout<<"factorial of "<<n<<" is: "<<fact<<endl;
    cout<<sizeof(fact);
}