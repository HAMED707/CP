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


 void solve(){
    int n;cin>>n;
   vector<pair<int,int>>v(n);
    for(auto& [x,y]:v)cin>>x>>y;
    sort(v.begin(),v.end());

     for (int i=0;i<n-1;i++) {
      int last=v[i+1].fi;
      int l=0,r=0;
      if(last>=v[i].fi && last<=v[i].se)l=min(last,v[i].fi),r=max(v[i].se,v[i+1].se);
      else continue;
      v[i+1].fi=l,v[i+1].se=r;
      v[i].fi=0,v[i].se=0;
     }

  for(auto& [x,y]:v)if((x+y)!=0)cout<<x<<" "<<y dl;
   
 }
 
 int main (){
    // txt
    HAMED
    solve();
    return 0;
 }