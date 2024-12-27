#include <bits/stdc++.h>
#define PI 22/7.0
using namespace std;

int main(){
    float d;
    cout<<"enter diameter";
    cin>>d;
    float r=d/2.0;
    float areaCircle = PI*r*r;
     cout << fixed << setprecision(2);
    cout << "area of circle is "<<areaCircle;  
}