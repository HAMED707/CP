///     frecuancy array and build_in functions //Week #1
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
 using namespace std;

void solve(){
    int n , q;
    cin>>n>>q;
    int arr[n];
    fr cin>>arr[i];
    vi pfx(n+1);

    pfx[0]=arr[0];

    for(int i = 1; i < n; i++)pfx[i]=pfx[i-1]+arr[i];

    while(q--){
        int a,b;cin>>a>>b;
        cout<<pfx[b-1]-pfx[a-1-1]dl;
    }


}

int main (){
    HAMED
    solve();
    return 0;
}

