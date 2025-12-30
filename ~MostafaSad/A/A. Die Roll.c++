#include <iostream>
using namespace std;

int main() {    
 int x,y,A;
   cin>>x>>y;

string pb[6]={"1/1","5/6","2/3","1/2","1/3","1/6"};
 if (x>y)
  {
    A=x;
    cout<<pb[x-1];
  }else if (y>x)
  {
    A=y;
    cout<<pb[y-1];
  }else if (x==y&&x==0)
  {
    
      cout<<"0/1";
  }else if (x==y)
  {
    cout<<pb[y-1];
  }
  
  
  
  
 
  
    return 0;
}