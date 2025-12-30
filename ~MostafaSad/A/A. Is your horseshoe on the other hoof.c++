#include <iostream>
using namespace std;

int main() {    
  long long x[4],res=0;
  cin>>x[0]>>x[1]>>x[2]>>x[3];
  for (int i = 0; i < 4; i++)
  {
    
        if (x[i]==x[i+1])
        {
                res++;
        }else if (x[i]==x[i+2])
        {
            res++;
        }else if (x[i]==x[i+3])
        {
            res++;
        }
  }
  cout<<res;    
  
 
return 0;
}