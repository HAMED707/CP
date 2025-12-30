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
const ll N=1e5+5;
  ll ans[N],times[N],arr[N];

 void solve(){
int n,m,q;
  cin>>n>>m>>q;
  vector<pair<int,int>>v(m+1);
 vector<ll> val(m+1,0);
  for(int i=1;i<=n;++i) cin>>arr[i];


  for(int i=1;i<=m;i++) {
 int l,r,x;
   cin>>l>>r>>x;
   v[i]={l,r};
   val[i]=x;
  }

 //////
  while (q--) {
   int v ,w; cin>>v>>w;
   times[v]++;
   times[w+1]--;

  }

for(int i=1;i<=m;i++)times[i]+=times[i-1];


 for (int i=1;i<=m;i++) {
  val[i]*=times[i];
 }

 for (int i=1;i<=m;i++) {
  int x=v[i].first;
  int y=v[i].second;
  ans[x]+=val[i];
  ans[y+1]-=val[i];
 }

 for (int i=1;i<=n;i++) {
  ans[i]+=ans[i-1];
 }
for (int i=1;i<=n;i++) cout<<arr[i]+ans[i]<<" ";

 }

 int main (){

    // txt
    HAMED
    solve();
    return 0;
 }