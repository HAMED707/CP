//
// Created by h70ab on 8/30/2024.
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
#define fr for(int i = 0; i < n-1; i++)
#define frs for(int i = 0; i < s.size(); i++)
#define fr1n for(int i = 1; i <= n; i++)
#define fr1 for(int i = 1; i < n; i++)
 using namespace std;
const int N=1e5+5;

void solve() {
    int n,x;
    cin>>n>>x;

    ll prefix[n+1]={},ans=0,fans=0;
    for(int i=1;i<=n;i++) {
        cin>>prefix[i];
        prefix[i]+=prefix[i-1];
        //cout<<prefix[i]<<" ";
    }
    //cout dl;

map<ll,ll>mp;
    for (int j = 0; j <= n; ++j) {
        ans=prefix[j]-x;
        fans+=mp[ans];
       mp[prefix[j]]++;
        }
//for(auto& [x,y]:mp)cout<<x<<" "<<y<<" ";
cout<<fans;
}

int main (){

    // freopen("input.txt","r",stdin);
    //  freopen("output.txt","w",stdout);
    //  freopen("error.txt","w",stderr);
     HAMED
    solve();
    return 0;
}