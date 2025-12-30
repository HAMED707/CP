#include <iostream>
using namespace std;

int main() {    
  int x,y,i=1;
  cin>>x>>y;
  while (true)
  {
  if((x*i)%10==y || (x*i)%10==0){
  cout<<i; 
  break;
  }
  i++;
}
return 0;
}