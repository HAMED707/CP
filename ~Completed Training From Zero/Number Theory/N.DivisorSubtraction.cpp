#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=1e5+5;

void solve(){

    ll n;cin>>n;
    if(n%2==0){cout<<n/2;return;}
    ll p=-1;
    for (ll i=2;i*i<=n;i++) {
            if (n%i==0) {
                p=i;
                break;
            }
    }
    if(p==-1)p=n;
     cout<<(n-p)/2+1;
}

int main (){
     txt
    HAMED
    solve();
    return 0;
}