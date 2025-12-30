#include<iostream>
#include<string>
using namespace std;
void toBase(int n){
    if(n==0)return;
    toBase(n/2); 
    cout<<n%2;
}
int main(){
  int x;
  cin>>x;  
  while (x--)
  {
    int n;
    cin>>n;
    toBase(n);
    cout<<endl;
      }
  
}