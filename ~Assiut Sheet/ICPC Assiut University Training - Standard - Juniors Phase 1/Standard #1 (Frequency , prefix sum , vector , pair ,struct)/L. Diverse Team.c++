#include <bits/stdc++.h>
 
#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
#define ll long long
#define ld long double
#define pl pair<ll, ll>
#define pi pair<int, int>
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


// vector<pair<int,int>>frq(100001,{0,0});
//  void solve(){
//    int n,sz;cin>>n>>sz;
//    int v[n];
// for (int i = 0; i < n; i++)
// {
//   cin>>v[i];
//   frq[v[i]].fi=1;
//   frq[v[i]].se=i;
// }


//    int res=0;
//    for (int i = 0; i < 100001; i++)
//    {
//     if(frq[i].fi==1)res++;
//    }
   
// if(res>=sz){
//   cout<<"YES" dl;
//   for (int i = 0; i < 100001; i++)
//    {
//     if(frq[i].fi==1)cout<<frq[i].se+1<<" ";
//    }
// }else NO
   
   
//  }
//  void solve(){
//   map<int,pi>freq;
//   int n,sz;cin>>n>>sz;
//   int value;
//   for (int i = 0; i < n and cin>>value; i++)
//   {
//     freq[value].fi++;
//     freq[value].se=i;
//   }
//   if(freq.size()>=sz){
//     cout<<"YES"dl;
//     for(auto& i:freq){
//     cout<<i.se.se+1<<" ";
//   }
//   }else NO
  
int vis[101];
void solve(){
   int n,sz;cin>>n>>sz;
  int value;
  vi v;
 // memset(vis, 0, sizeof(vis));
  for (int i = 1; i <= n and cin>>value; i++)
  {
    if(!vis[value]){v.push_back(i);
    vis[value]++;}
    }
    
    if(v.size()<sz)NO
    else{
      cout<<"YES"dl;
        for (int i = 0; i < sz; ++i) {
            cout << v[i];
            
        }
    }

      

  }

 int main (){
    HAMED
    solve();
    return 0;
 }