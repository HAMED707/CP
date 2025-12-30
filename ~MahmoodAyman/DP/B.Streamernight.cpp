#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;
const int N=2e5+5;
int n,k,dp[N],mn[N];


int rec(int i) {

    if(i==n+1)return 0;

    if(dp[i]!=-1)return dp[i];

    dp[i]=rec(i+1);
    if(mn[i]<=n+1)dp[i]=max(dp[i],rec(mn[i])+1);
    return dp[i];

}

void solve(){
    cin>>n>>k;
    for(auto&i:mn)i=1e9;
    memset(dp,-1,sizeof dp);
    for (int i=0;i<k;i++){
        int x,y;cin>>x>>y;
        mn[x]=min(mn[x],y);
    }

    cout<<rec(1)<<'\n';
}

int main (){

   // txt
    HAMED
    solve();
    return 0;
}