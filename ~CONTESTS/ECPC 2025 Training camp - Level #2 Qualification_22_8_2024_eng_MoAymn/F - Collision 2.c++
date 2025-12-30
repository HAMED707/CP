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

 void solve(){
   int n;cin>>n;
pair<int,int> arr[n];
for(auto& [x,y]:arr)cin>>x>>y;
string s;
cin>>s;
    for (int i = 0; i < n-1; i++)for (int j = i+1; j < n; j++){
        if(arr[i].se==arr[j].se){
            if(s[i]!=s[j])YES
        }
        else if(arr[i].se==arr[j].se and arr[i].fi==arr[j].fi ){
            YES
        }
    }NO
    
    
   
   
 }
 
 int main (){
    HAMED
    solve();
    return 0;
 }