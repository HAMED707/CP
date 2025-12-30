#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
  double distance( double x,double y,double x1,double y1){
    long double distan=sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
    return distan;
 }
int main() {  
 
 double x,y,x1,y1,x2,y2,x3,y3;
  cin>>x>>y>>x1>>y1>>x2>>y2>>x3>>y3;
   
    double x1center=(x+x1)/2;
    double y1center=(y+y1)/2;
    double x2center=(x2+x3)/2;
    double y2center=(y2+y3)/2;
    double d_centers=distance(x1center,y1center,x2center,y2center);

    double radius_1=distance(x,y,x1,y1)/2;
    double radius_2=distance(x2,y2,x3,y3)/2;
    
    cout<<(d_centers>(radius_1+radius_2)?"NO":"YES");
 
    return 0;
}   