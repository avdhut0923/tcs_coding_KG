#include <bits/stdc++.h>
using namespace std;

int countsetBits(int i){
    int count=0;
    while (i)
    {
        count = count + (i & 1);
        i=i/2; // i=i>>1
    }
    return count;
}

int main(){
    int i=15;
    cout<<countsetBits(i);
}