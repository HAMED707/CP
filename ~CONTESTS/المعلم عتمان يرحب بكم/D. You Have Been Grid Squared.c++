
   
#include<iostream>


using namespace std;
typedef long long ll;
int main(){
  ll n;
  cin>>n;
  while (n--)
  { 
    ll x;
    cin>>x;
    ll ans=((x*x)-(x-1));
    cout<<ans<<"\n";
  }
  

  
}