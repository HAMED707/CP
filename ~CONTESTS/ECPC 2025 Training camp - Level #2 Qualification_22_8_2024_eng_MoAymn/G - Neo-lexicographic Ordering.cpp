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
const int N=1e5+5;
    map<char,int>mp;
bool oper(string x, string y) {
    int len = min(x.size(), y.size());
    for (int i = 0; i < len; ++i) {
        if (mp[x[i]] < mp[y[i]]) return true;
        if (mp[x[i]] > mp[y[i]]) return false;
    }
    return x.size() < y.size(); 
}
 void solve(){
    
    
    for (int i = 1; i < 27; i++)
    {
      char c;cin>>c;
      mp[c]=i;
    }
    int n;cin>>n;
    string s[n];
    fr cin>>s[i];

    sort(s,s+n,oper);
    fr cout<<s[i] dl;
   //for(auto& [x,y]:mp)cout<<x<<" "<<y dl;
 }
 
 int main (){
    HAMED
    solve();
    return 0;
 }