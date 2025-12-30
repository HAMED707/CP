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
#define fr for(int i = 0; i < N; i++)
#define frs for(int i = 0; i < s.size(); i++)
#define fr1n for(int i = 1; i <= n; i++)
#define fr1 for(int i = 1; i < n; i++)
 using namespace std;
const int N=5;
bool vis[N],ans;int arr[N];
void rec(int idx=0,int val=0,int _1=0) {
    //basecase
    if(ans)return;
    if(idx==5) {
        ans|= (val==23);
        return;
    }
    //transstion
    for (int i=0;i<5;i++) {
        if(vis[arr[i]])continue;
        vis[i]=1;
        if(_1) {
            rec(idx+1,val+arr[i]);
            rec(idx+1,val-arr[i]);
            rec(idx+1,val*arr[i]);
        }else rec(idx+1,arr[i],1);
         vis[i]=0;
    }
}
void solve(){
int n;cin>>n;
    while (n--) {
        fr cin>>arr[i];
        rec();
        cout<<(ans?"Possible":"Impossible") dl;
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