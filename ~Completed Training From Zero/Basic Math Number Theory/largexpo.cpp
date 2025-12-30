#include <iostream>
#include <bits/stdc++.h>

#define ll long long
#define MOD 1e9+6
using namespace std;
ll mod=1e9+7;

/*
 * 45%2^10000=?
 * 2^10000 which is an extremely large number.
 * so   45%2^10000=45
 *
 * log2(y)<x =? == y<2^x
 * log2(y)<x =y
 */


int main() {
  ll y=45,x=1;
    if(x>63 or log2(y)<x)cout<<y;
    else cout<< y %(int)pow(2,x);

    return 0;
}

// if i have 2^1e17
// and i will use mod to void overflow 2^1e17 % 1e9+5 \|/

// ll bExp(ll x,ll n) {
//     if(n==0)return 1;
//     if(n==1)return x;
//     ll r=1;
//     ll c=bExp(x,n/2);
//     if(n%2==1)r=x%mod;
//     r= r*c*c;
//     return r%mod;
// }
//
// int main() {
//     ll y=45,x=1e15;
//     //if(x>63 or log2(y)<x)cout<<y;
//     cout<< bExp(2,x);
//
//
//     return 0;
// }