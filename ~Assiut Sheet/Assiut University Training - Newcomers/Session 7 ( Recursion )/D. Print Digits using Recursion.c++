#include<iostream>
#include<string>
using namespace std;
void re(string s,int i,int size){
    if(size==i)return;
    if(i==size-1)cout<<s[i];
     else cout<<s[i]<<" ";
   return re(s,i+1,size);
    
}
int main(){
  int x;
  cin>>x;  
  while (x--)
  {
    string s;
    cin>>s;
    int size = s.size();
    re(s,0,size);
    cout<<"\n";
      }
  
}