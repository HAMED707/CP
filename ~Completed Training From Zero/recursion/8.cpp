//
// Created by h70ab on 8/28/2024.
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
const int N=16;
int n,l,r,x,s[N],dif,ans;
bool valid(int sum) {
    return sum<=r and sum>=l ;
}
void rec(int i=0,int sum=0,int mn=INT_MAX,int mx=0) {
    //basecase
    if(i>=n) {
        if(valid(sum)&&(mx-mn)>=x)ans++;
        return;
    }
    //transtion
    //cout<<ans<<" ";
    //cout<<" sum: "<<sum+s[i]<<" "<<valid(sum+s[i]) dl;
   rec(i+1,sum+s[i],min(mn,s[i]),max(mx,s[i]));
   rec(i+1,sum,mn,mx);

}
void solve(){
   cin>>n>>l>>r>>x;
    fr cin>>s[i];
    //cout<<s[n];
        rec();
    cout<<ans;
}

int main (){

    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // freopen("error.txt","w",stderr);
    HAMED
    solve();
    return 0;
}