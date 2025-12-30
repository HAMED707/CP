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
#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);
 using namespace std;

// bool opr(pair<string,ll>a,pair<string,ll>b) {
//  if(a.se==b.se) {
//  int sz1=a.fi.size();
//  int sz2=b.fi.size();
//  int mn=min(sz1,sz2);
//
//   for (int i=0;i<mn;i++) {
//    if((a.fi[i] != b.fi[i]))return (a.fi[i] < b.fi[i]) ;
//   }
//   return sz1 < sz2;
//  }
//   return (a.se>b.se);
// }
bool opr(pair<string , int> a, pair<string , int>b){
 if(a.second == b.second) return a.first < b.first;
 return a.second > b.second;
}
 void solve(){
   
   ll n;cin>>n;
   vector<pair<string,ll>>v(n);
   fr{
    cin>>v[i].fi>>v[i].se;
   }

  sort(v.begin(),v.end(),opr);

   fr{
    cout<<v[i].fi<<" "<<v[i].se;
    cout dl;
       }
   
   
 }
 
 int main (){
    //txt
    HAMED
    solve();
    return 0;
 }