// #include<iostream>


// using namespace std;
// typedef long long ll;

   
// ll sum(ll x,ll suf){
//     ll input;
//    if (x==0)return 0;
//    cin>>input;
//    if(suf-->0) return sum(x-1,suf);
//    else return input+sum(x-1,suf);
// }
// int main(){
//   ll n ,m; cin>>n>>m; 
//   ll suffix=n-m ;
//  cout<<sum(n,suffix);
// }





   
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
  ll n ,m; cin>>n>>m; 
  ll suffix=n-m ;
 ll ans=(sum(n));
 cout<<ans;
 cout<<"\n"<<sum(suffix);
}