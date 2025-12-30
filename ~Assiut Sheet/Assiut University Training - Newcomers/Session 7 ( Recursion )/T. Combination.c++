
   
#include<iostream>
#include<cmath>

using namespace std;
typedef long long ll;
ll nCr(ll n,ll i,ll r ,ll ans){
    if(i==r)return ans;
     ans*=(n-i);
     ans/=i+1;
   return nCr(n,i+1,r,ans);
}


int main(){
  ll n,r;
  cin>>n>>r;
    cout<<nCr(n,0,r,1); 
}