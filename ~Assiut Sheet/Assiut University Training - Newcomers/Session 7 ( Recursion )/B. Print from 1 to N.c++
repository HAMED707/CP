#include<iostream>
using namespace std;
void re(int i,int x){
    if(i>x)return;
     re(i+1,x);
    cout<<i<<"\n";
    
}
int main(){
  int x;
  cin>>x;  
  re(1,x);
}