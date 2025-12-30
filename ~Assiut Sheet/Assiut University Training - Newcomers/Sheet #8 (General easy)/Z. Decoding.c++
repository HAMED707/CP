#include<iostream>
using namespace std;
int main(){
    int sz;
  string encode;
  cin>>sz>>encode;

    
    char* ans = new char[sz ]; 

  if(sz%2!=0){
    int ptr=sz/2;
    int pos=0,neg=1;
    for (int i = 0; i < sz; i++)
    {  if(i%2==0){
           ans[ptr+pos]=encode[i];
           pos++; 
        }else{
           ans[ptr-neg]=encode[i];
           neg++;
        }
    }
    
  }else{
    int ptr=(sz/2)-1;
    int pos=0,neg=1;
    for (int i = 0; i < sz; i++)
    {  if(i%2==0){
           ans[ptr-pos]=encode[i];
           pos++; 
        }else{
           ans[ptr+neg]=encode[i];
           neg++;
        }
    }
  }
for (int i = 0; i < sz; i++)
{
    cout<<ans[i];
}
delete[] ans;
   return 0;
}