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
const int N=5;
int ans,x,y,x2,y2,n;
    char arr[N][N];
    bool vis[N][N];
bool valid(int a,int b) {
    return a>=0 and a<n and b>=0 and b<n and arr[a][b]!='#' and !vis[a][b];
}
int rec(int v,int w) {
    //bssecase
   if(!valid(v,w))return 1e5;
    if(v==x2-1 and w==y2-1)return 0;
    //transition
    vis[v][w]=1;
    int q=min({rec(v+1,w)+1,rec(v,w+1)+1,rec(v-1,w)+1,rec(v,w-1)+1});
    vis[v][w]=0;

    return q;
}

void solve(){
     cin>>n;

    for(int i=0;i<n;i++)for(int j=0;j<n;j++) cin>>arr[i][j];

    cin>>x>>y>>x2>>y2;
    cout<<rec(x-1,y-1);


}

int main (){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    HAMED
    solve();
    return 0;
}