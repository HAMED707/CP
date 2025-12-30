#include<iostream>


using namespace std;
typedef long long ll;

   
ll sum(ll x){
    ll input;
   if (x==0)return 0;
   cin>>input;
   return input+sum(x-1);
}
int main(){
  ll n ; cin>>n;  
 cout<<sum(n);
}