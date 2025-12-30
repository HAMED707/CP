#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;
const int N=1e5+3;
ll n,x,y,dp[3][N],a[2][N];


ll rec(int d,int i) {
    if(i==n)return 0;

    ll &re=dp[d][i];
    if(~re)return re;
    re=rec(d,i+1);
    if(d!=0) re=max(rec(0,i+1)+a[0][i],re);
    if(d!=1) re=max(rec(1,i+1)+a[1][i],re);

    return re;
}

void solve(){
    cin>>n;
    memset(dp,-1,sizeof dp);
    for (int i=0;i<n;i++)cin>>a[0][i];
    for (int i=0;i<n;i++)cin>>a[1][i];

    cout<<rec(2,0);
}

int main (){

    // txt
    HAMED
    solve();
    return 0;
}