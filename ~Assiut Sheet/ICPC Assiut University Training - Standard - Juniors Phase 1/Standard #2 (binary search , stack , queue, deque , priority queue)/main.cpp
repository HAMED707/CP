#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


using namespace std;
const int N=1e5+5;

void solve(){
    int n,q;cin>>n>>q;
    map<string,ll>mp;
    for (ll i=0;i<n;i++) {
        string s;
        ll x;
        cin>>s>>x;
        mp[s]=x;
    }
    while (q--) {
        int o;
        string a;
        ll x;
        cin>>o>>a>>x;
        //  cout<<o<<"\n";
        if(o==1)mp[a]+=x;
        else if(o==2) cout<<mp[a]<<'\n';
    }
    // for (auto& [i,d]:mp)cout<<i<<' '<<d<<'\n';


}

int main (){

    txt
    HAMED
    solve();
    return 0;
}