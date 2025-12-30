#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;
const int N=1e5+5;

void solve(){

   int n;cin>>n;
    //int a[n];for(auto&i:a)cin>>i;
    int dp[1003]{},ans=0;

    for (int i=0;i<n;i++) {

        int x;cin>>x;
        for (int o=0;o<x;o++) {
            dp[x]=max(dp[x],dp[o]+1);
        }
        ans=max(ans,dp[x]);
    }cout<<ans;

}

int main (){

    // txt
    HAMED
    solve();
    return 0;
}