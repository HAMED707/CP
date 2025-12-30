#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



 using namespace std;
const int N=2e3+5;
const int inf=-2e8;


int n,k,d,con=0;
int dp[N][N];
int rec(int i=0,int x=0) {

    if(i==n and x)return 1;
    if(i>=n)return 0;
    int&ret=dp[i][x];
    if(~ret)return ret;
    int ans=0;
    for (int j=1;j<=k;j++) {
        ans+= rec(i+j,(x or j>=d?1:0 ));
        if(ans>=1e9+7)ans-=1e9+7;
    }
    return ret= ans;
}

void solve(){

    cin>>n>>k>>d;
    memset(dp,-1,sizeof dp);
    cout<<rec();

}

int main (){
     // txt
    HAMED
    solve();
    return 0;
}