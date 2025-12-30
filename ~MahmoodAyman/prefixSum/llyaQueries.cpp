//
// Created by h70ab on 8/29/2024.
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
#define fr for(int i = 0; i < n; i++)
#define frs for(int i = 0; i < s.size(); i++)
#define fr1n for(int i = 1; i <= n; i++)
#define fr1 for(int i = 1; i < n; i++)
 using namespace std;
const int N=1e5+5;

void solve(){
    int q;
    string s;
    cin>>s;
    s='a'+s;
    int n=s.size();
    int prefix[n+1]={};
    for(int i=1;i<=n;i++) {

        prefix[i]=(s[i]==s[i+1]);
      cout<<(s[i]==s[i+1])<<" ";

    }
   cout dl;
    int f[n+1]={};
    for(int i=1;i<=n;i++) {

        f[i]=f[i-1]+prefix[i];
        cout<<f[i]<<" ";

    }
    //cout<<s[6]<<" "<<s[5];
     //cout dl;
    //for(int i=1;i<n;i++) cout<<prefix[i]<<" " ;
    //cout dl;
    cin>>q;
    while (q--) {
        int r,l;cin>>l>>r;

        cout<<f[r]-f[l-1]-prefix[r] dl;
    }

}

int main (){

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    HAMED
    solve();
    return 0;
}