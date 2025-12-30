#include<iostream>
using namespace std;
void re(int x){
    if(x==0)return;
    cout<<"I love Recursion\n";
    return re(x-1);
    
}
int main(){
  int x;
  cin>>x;  
  re(x);
}