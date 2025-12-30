
#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;
const int N=5000+5;
ll n,s[N];
ll dp[N][N];
ll rec(int l=0,int r=n-1) {
    if(r<l)return 0;
    ll&ret=dp[l][r];
    if(~ret)return ret;
    ll x=n-(r-l);
    return ret = max(rec(l+1,r)+s[l]*x,rec(l,r-1)+s[r]*x);
}



void solve(){
    cin>>n;
    memset(dp,-1,sizeof dp);
    for(int i=0;i<n;i++)cin>>s[i];
    cout<<rec();



}

int main (){

   // txt
    HAMED
    solve();
    return 0;
}