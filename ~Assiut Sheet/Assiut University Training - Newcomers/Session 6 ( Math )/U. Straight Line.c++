#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
 double distance( double x,double y,double x1,double y1){
    long double distan=sqrt((x-x1)*(x-x1)+(y-y1)*(y-y1));
    return distan;
 }
double area_METH1( double x,double y,double x1,double y1,double x2,double y2){
    double area = (x * (y1 - y2) + x1 * (y2 - y) + x2 * (y - y1)) / 2.0;
    return area;
 }
 bool LineEquation_METH2( double x,double y,double x1,double y1,double x2,double y2){
    
     
    int slope=abs(y1 - y) / abs(x1 - x),b=y-(slope*x);
    
    return ((x1-x)*(b-y2)==(y1-y)*x2);
    
 }

int main() {  
 
 int x,y,x1,y1,x2,y2;
  cin>>x>>y>>x1>>y1>>x2>>y2;
  //__METHOD2
//    double d1=distance(x,y,x1,y1);
//   double d2=distance(x,y,x2,y2);
//   double d3=distance(x1,y1,x2,y2);
    
    
    
    
 cout<<( LineEquation_METH2(x,y,x1,y1,x2,y2)?"YES":"NO");
    return 0;
} 