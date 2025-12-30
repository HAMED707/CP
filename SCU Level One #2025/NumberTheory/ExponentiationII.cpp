#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;
const ll N=1e9+7;

ll biExpo(ll a,ll b,ll mod)
{
    if (b==0) return 1;
    if (b==1) return a;
    ll res=1;
    if (b&1) res=a;
    ll x=biExpo(a,b/2,mod);
    return (res*x%mod*x%mod)%mod;
}




void solve() {
    ll a,b,c;cin>>a>>b>>c;
    //if (b==0)return void (cout<<1<<endl);
    //if (a==0)return void (cout<<0<<endl);

    ll tmp=biExpo(b,c,N-1);
    //cout<<tmp<<endl;
    cout<<biExpo(a,tmp,N)<<endl;
}



int main (){

    //txt
    HAMED
    int t;cin>>t;
    while (t--)
        solve();
    return 0;
}