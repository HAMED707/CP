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
const int N=1e5+5;

void solve(){
    int n;cin>>n;
    int a[n+1]{},b[n+1]{};
    ll pre1[n+1]{},pre2[n+1]{};


    for(int i=1;i<=n;i++) {
        cin>>a[i];
        b[i]=a[i];
        pre1[i]=a[i]+pre1[i-1];
    }
    sort(b,b+n+1);
    for(int i=1;i<=n;i++) {
        pre2[i]=b[i]+pre2[i-1];
    }

    // for(auto& i:pre1)cout<<i<<' ';
    // cout<<'\n';
    // for(auto& i:pre2)cout<<i<<' ';

    int k;cin>>k;while (k--) {
        int o,l,r;cin>>o>>l>>r;
        if(o==2){cout<<pre2[r]-pre2[l-1]<<'\n';}
        else cout<<pre1[r]-pre1[l-1]<<'\n';
    }
}

int main (){

    // txt
    HAMED
    solve();
    return 0;
}