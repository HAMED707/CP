#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
 
int main() {  
 
  double a,b,c;
  cin>>a>>b>>c;
   
  if((a+b>c)&&(b+c>a)&&(a+c>b)){ 
    double perimeter=(a+b+c)/2, area=sqrt(perimeter*(perimeter-a)*(perimeter-b)*(perimeter-c));
   cout<<"Valid\n";
    printf("%.6lf",area);
    
  }else cout<<"Invalid";
    
    return 0;

} 