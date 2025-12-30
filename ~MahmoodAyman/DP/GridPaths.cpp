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
    int n;cin>>n;
    int a[n][n]{};
    int dp[n][n]{};
    dp[0][0]=1;
    for (int i=0;i<n;i++)for(int j=0;j<n;j++) {
        char x;cin>>x;
        if(x=='*')dp[i][j]=-1e9;
    }


    if(dp[0][0]==-1e9 or dp[n-1][n-1]==-1e9)return void(cout<<0);

    for (int i=1;i<n;i++)if(dp[i][0]==0&&dp[i-1][0]>=0)dp[i][0]=dp[i-1][0];
    for (int i=1;i<n;i++)if(dp[0][i]==0&&dp[0][i-1]>=0)dp[0][i]=dp[0][i-1];

   for (int i=1;i<n;i++)for(int j=1;j<n;j++){
       if(dp[i][j]<0)continue;

        if(dp[i-1][j]>=0)dp[i][j]+=dp[i-1][j];
        if(dp[i][j-1]>=0)dp[i][j]+=dp[i][j-1];

       if(dp[i][j]>=1e9+7)dp[i][j]-=1e9+7;
   }
    // for (int i=0;i<n;i++) {
    //     for(int j=0;j<n;j++){
    //         cout<<dp[i][j]<<' ';
    // }cout<<endl;
    // }

    cout<<dp[n-1][n-1];
}

int main (){
    // txt
    HAMED
    solve();
    return 0;
}