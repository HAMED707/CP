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
const int N=27;
int freq_s[N];
int freq_tt[N];
int freq_p[N];
 void solve(){
   int q;cin>>q;
   while (q--)
   {
    string s,t,p;
    cin>>s>>t>>p;
    for (int i = 0; i < s.size(); i++)freq_s[s[i]-'a']++;
    for (int i = 0; i < t.size(); i++)freq_tt[t[i]-'a']++;
    for (int i = 0; i < p.size(); i++)freq_p[p[i]-'a']++;
    string tmp="";
    for (int i = 0; i < 27; i++)
    {
     //cout<<freq_tt[i] dl;
      freq_tt[i]-=freq_s[i];
      int cnt=freq_tt[i];
      while (cnt--)
      {
        tmp+=i+'a';
      }
    }
    cout<<tmp dl;
    bool flag=1;
    for (int i = 0; i < 27; i++)
    {
      if((freq_p[i]-freq_tt[i])<0){
        flag=0;
    }}
    int flag2=0;
  
    if(tmp+s==t)flag2=1;
    else if(s+tmp==t)flag2=1;
    else if(s.insert(0,tmp)==t)flag2=1;
  
  
     cout<<(flag and flag2?"YES":"NO") dl;

   
   memset(freq_s,0,N);
   memset(freq_tt,0,N);
   memset(freq_p,0,N);
   }
   
   
   
 }
 
 int main (){
    HAMED
    solve();
    return 0;
 }