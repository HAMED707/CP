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

bool ord(pair<int,int>x,pair<int,int>y){
    return (x.fi-x.se)>(y.fi-y.se);
}
 void solve(){
   ll n;cin>>n;
   vector<pair<int,int>>batl(n);
   for(auto& [a,b]:batl) cin>>a>>b;
    sort(batl.begin(),batl.end(),ord);
   //for(auto& [a,b]:batl) cout<<a<<" "<<b dl;
    ll sold=0,
        rest=0;
    for(auto& [a,b]:batl){
        if(a>rest){sold+= a-rest;
        rest=a;
        }
        rest-=b;
    }
    
   cout<<sold;
   
 }
 
 int main (){
    HAMED
    solve();
    return 0;
 }