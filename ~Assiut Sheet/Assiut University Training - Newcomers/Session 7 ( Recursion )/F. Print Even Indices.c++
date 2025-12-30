#include<iostream>
#include<string>
using namespace std;
void evenOrder(int i,int n){
    int user;
    if(i==n)return;
    cin>>user;
    evenOrder(i+1,n);
    if(i%2==0) if(i==0)cout<<user;else cout<<user<<" ";;
}
int main(){
  int x;
  cin>>x;  
    evenOrder(0,x);
  
}