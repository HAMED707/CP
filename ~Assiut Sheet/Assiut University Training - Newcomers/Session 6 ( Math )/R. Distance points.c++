#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
 
int main() {  
 
  long double x,y,x1,y1;
  cin>>x>>y>>x1>>y1;
    long double distan=(x-x1)*(x-x1)+(y-y1)*(y-y1);
    cout<<fixed<<setprecision(9)<<sqrt(distan);
    return 0;
} 