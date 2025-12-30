#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



 using namespace std;
const int N=1e5+5;
const int inf=-2e8;





void solve(){
   int n,m;cin>>n>>m;
    int a[n][m]{};
    for (int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>a[i][j];
    int dp[n][m]{};
    dp[0][0]=a[0][0];
    for (int i=1;i<n;i++)dp[i][0]=dp[i-1][0]+a[i][0];
    for (int i=1;i<m;i++)dp[0][i]=dp[0][i-1]+a[0][i];
   for (int i=1;i<n;i++)for(int j=1;j<m;j++)dp[i][j]=max(dp[i-1][j],dp[i][j-1])+a[i][j];
    // for (int i=0;i<n;i++) {
    //     for(int j=0;j<m;j++){
    //         cout<<dp[i][j]<<' ';
    // }cout<<endl;
    // }

    cout<<dp[n-1][m-1];
}

int main (){
    // txt
    HAMED
    solve();
    return 0;
}