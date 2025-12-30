//
// Created by h70ab on 8/27/2024.
//
#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define ll long long
#define ld long double
#define pl pair<ll, ll>
#define vi vector<ll>
#define vii vector<vi>
#define viii vector<vii>
#define vc vector<char>
#define vcc vector<vc>
#define vp vector<pl>
#define vpp vector<vp>
#define vppp vector<vpp>
#define mi map<ll,ll>
#define unmi unordered_map<ll, ll>
#define mc map<char,int>
#define sortx(X) sort(X.begin(),X.end());
#define all(X) X.begin(),X.end()
#define ln '\n'
#define YES {cout << "YES\n"; return;}
#define NO {cout << "NO\n"; return;}
#define fi first
#define se second
#define sz(x) int(x.size())
#define fixed(n) fixed << setprecision(n)
#define dl <<"\n"
#define fr for(int i = 0; i < n; i++)
#define frs for(int i = 0; i < s.size(); i++)
#define fr1n for(int i = 1; i <= n; i++)
#define fr1 for(int i = 1; i < n; i++)
 using namespace std;
const ll N=1e11;
ll l,r,ans;
set<ll>st;
void lucky(ll i=0) {
    //basecase
    if((i)>N)return;
    //transtion
    st.insert(i);
    lucky(i*10+4),lucky(i*10+7);
}
void solve(){
cin>>l>>r;
    lucky();
    st.erase(0);
    //for(auto& itr:st)cout<<itr<<" ";
    //cout<<r<<" ";
    auto l_=*st.lower_bound(l);
    auto r_=*st.lower_bound(r);

vector<ll>intervls;
    intervls.push_back(l_);
    for(auto& itr:st) {
       if(itr>l_) intervls.push_back(itr);

        if(itr==r_) break;
    }

   // for(auto& it:intervls)cout<<it<<" ";
ll idx=0;
for (ll i = l; i <= r; ++i) {

    if (idx < sz(intervls) && i > intervls[idx]) {
        ++idx;
    }
    if (idx < sz(intervls) && i <= intervls[idx]) {
        ans += intervls[idx];
    }
}
   // cout<<l_<<" "<<r_<<" ";
   // ans+=(l_-l+1)*l_;
    //cout<<ans<<" ";
   // ans+=(r-(l_+1)+1)*r_;
    cout << (l_ > r_? (abs(r - l) + 1) * l_ :ans) << "\n";

}

int main (){

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // freopen("error.txt","w",stderr);
    HAMED
    solve();
    return 0;
}