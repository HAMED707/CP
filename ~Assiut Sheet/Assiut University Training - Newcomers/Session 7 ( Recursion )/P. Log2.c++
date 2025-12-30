
#include<iostream>
#include<cmath>

using namespace std;
typedef long long ll;
ll re(ll power,ll n){
    if(n==1)return power;
    return re(power+=1,n/2);

}

int main(){
  ll n;
  cin>>n;
 
 cout<<re(0,n);
}