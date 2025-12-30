//
// Created by h70ab on 9/5/2024.
//
#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


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
const int N=1e5+5;

void solve(){
   ll n;cin>>n;
    ll l[n]={},r[n]={};
    vector<ll>v;

    for (int i=0;i<n;i++) {
        ll x,y;
        cin>>x>>y;
        l[i]=x,r[i]=y;
        v.push_back(x);
        v.push_back(y);
    }
    sort(all(v));
    v.erase(unique(all(v)),v.end());
    for (int i=0;i<n;i++) {
        l[i]=lower_bound(all(v),l[i])-v.begin();
        r[i]=lower_bound(all(v),r[i])-v.begin();
        //cout<<l[i]<<" "<<r[i]<<" ";
    }


    int par[n+n+1]={};
    for (int i=0;i<n;i++) {
      par[l[i]]++;
      par[r[i]+1]--;
    }
    for (int i=1;i<n+n+1;i++) {
        par[i]+=par[i-1];
       // cout<<par[i]<<" ";

    }
    cout<<*max_element(par,par+n+n+1);

}

int main (){

   // txt
    HAMED
    solve();
    return 0;
}