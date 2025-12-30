#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;
const int N=1e5+5;
ll MOD =1000000007LL;


void solve(){
    
ll n;cin>>n;

ll ans=0;

    for (ll d = 1; d <= n; ) {
        ll rate  = n / d;
        ll range = n / rate;

        // S = sum_{k=d}^{range} k = (range*(range+1)/2) - ((d-1)*d/2)
        __int128 A = (__int128)range * (range + 1);
        __int128 B = (__int128)(d - 1) * d;
        __int128 S128 = (A - B) / 2;

        ll Smod = (long long)(S128 % MOD);
        if (Smod < 0) Smod += MOD;

        // safe multiply (use __int128) then reduce
        ll add = (long long)(((__int128)(rate % MOD) * Smod) % MOD);

        ans += add;
        if (ans >= MOD) ans -= MOD; // ans < 2*MOD here
        d = range + 1;
    }  
        
    cout<<ans%MOD ;
     
}


int main (){

    // txt 
    HAMED
    solve();
    return 0;
}