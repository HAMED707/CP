#include<iostream>
#include<string>

using namespace std;
typedef long long ll;

ll fact(ll n){
    if(n==1)return 1;
   
    return n*fact(n-1);
}
int main(){
ll x;
cin>>x;
cout<<fact(x);
  
}