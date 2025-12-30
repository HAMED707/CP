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
   ll n,q;
    cin>>n>>q;
    ll prefix[n+2]={},tmp[n+2]={};
    for (int i=1;i<=n;i++) {
        cin>>prefix[i];
    }
    while (q--) {
        ll l,r,val;
        cin>>l>>r>>val;
        tmp[l]+=val;
        tmp[r+1]-=val;
      //  cout<<tmp[l]<<" "<<tmp[r+1]<<" ";
    }
    //cout dl;
    for (int i=1;i<=n;i++) {
        tmp[i]+=tmp[i-1];
      //  cout<<tmp[i]<<" ";
    }
    //cout dl;
    for (int i=1;i<=n;i++) {

        cout<<tmp[i]+prefix[i]<<" ";
    }

}

int main (){

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // freopen("error.txt","w",stderr);
    HAMED
    solve();
    return 0;
}