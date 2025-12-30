#include<iostream>  
using namespace std;


int main(){
  string s;
  int ans=0;
  cin>>s;
  char ptr='a';
  for (int i = 0; i < s.size(); i++)
  {
    int res=abs(ptr-s[i]);
    if(res>13)ans+=abs(res-26);
    else ans+=res;
    ptr=s[i];
  }
  cout<<ans;
    
   return 0;
}