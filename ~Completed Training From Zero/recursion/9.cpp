//
// Created by h70ab on 8/28/2024.
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
const ll N=1e10;
int n;
set<ll>st;
void sup_lucky(ll x=0,ll i7_=0,ll i4_=0) {
    //basecase
    if(x>N)return;
    //transtion
    if(i7_==i4_ and i4_>0)st.insert(x);
   // cout<<x<<" ";
    sup_lucky(x*10+4,i7_,i4_+1);
    sup_lucky(x*10+7,i7_+1,i4_);
}
void solve(){
    sup_lucky();
  //  cout dl;
  //  for(auto& i:st)cout<<i<<" ";
    cin>>n;
    cout<<*st.lower_bound(n);
}

int main (){

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // freopen("error.txt","w",stderr);
    HAMED
    solve();
    return 0;
}