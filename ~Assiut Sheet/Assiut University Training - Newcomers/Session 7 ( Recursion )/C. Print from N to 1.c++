#include<iostream>
using namespace std;
void re(int x){
    if(x==0)return;
    if(x==1)cout<<x;
    else cout<<x<<" ";
     re(x-1);
    
}
int main(){
  int x;
  cin>>x;  
  re(x);
}