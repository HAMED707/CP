#include <iostream>
using namespace std;

int main() {    
  string s1,s2;
  cin>>s1>>s2;
  int z=0;
  for (int i = 0; i < s2.length(); i++)
  {
    if (s2[i]==s1[z])
    {
        z++;
    }    
  }
  cout<<z+1;

return 0;
}