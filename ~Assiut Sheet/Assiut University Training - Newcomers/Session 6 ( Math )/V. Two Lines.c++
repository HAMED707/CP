#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
bool slope(int x,int y,int x1,int y1,int x2,int y2,int x3,int y3){
 
   return ((y3-y2)*(x1-x)==(y1-y)*(x3-x2));
}
 
int main() {  
 
 int x,y,x1,y1,x2,y2,x3,y3;
  cin>>x>>y>>x1>>y1>>x2>>y2>>x3>>y3;
   
    //double vector=((x1-x)*(y3-y2))-((x3-x2)*(y1-y));
    
    
 cout<<( slope(x,y,x1,y1,x2,y2,x3,y3)?"YES":"NO")<<endl;
 
    return 0;
} 