#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;
const int N=1e5+5;
int n;


void solve(){

    cin>>n;
    vector<ll>a(n);for (auto& i:a) cin>>i;


    ll g=0;
    for (int i=0;i<n;i++)
        g=__gcd(g,a[i]);

    ll ans=0;
    for (ll i=1;i<=g/i;i++)if (g%i==0){
            ans++;
            if (g/i!=i)ans++;
        }
    cout<<ans<<"\n";
}


int main (){

     // txt
    HAMED
    solve();
    return 0;
}