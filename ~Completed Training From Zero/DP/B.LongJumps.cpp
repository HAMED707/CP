
#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;
const int N=1e5+5;

void solve(){
    int n;cin>>n;vector<int>v(n+1);
    for(int i=1;i<=n;i++)cin>>v[i];
    vector<ll>dp(n+1);

    ll ans=0,mx=LLONG_MIN;
    for (int i=1;i<=n;i++) {
        dp[i]=i;
        ans=0;
        while (dp[i]<=n) {
            ans+=v[dp[i]];
            dp[i]+=v[i];
           // cout<<dp[i]<<' '<<v[i-1]<<'\n';
        }
        mx=max(ans,mx);

    }
   cout<<mx<<'\n';

}

int main (){

  // txt
    HAMED
    int t;cin>>t;
    while(t--)solve();
    return 0;
}