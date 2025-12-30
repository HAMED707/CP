#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



 using namespace std;
const int N=1e5+5;
const int inf=-2e8;
const int MOD = 1e9 + 7;




void solve(){
    int n;
    cin>>n;
    int dp[n+1]{};
    dp[0]=1;

    for (int i=1;i<=n;i++) {


        for (int j=1;j<=6;j++) {
            if(i-j>=0) {
                dp[i]+=dp[i-j];
                   if(dp[i]>=1e9+7)dp[i]-=1e9+7;
            }
        //     for(int o=0;o<=n;o++)cout<<dp[o]<<' ';
        //     cout<<'\n';
        }
          //  cout<<dp[i]<<'\n';

    }

    cout<<dp[n];
}

int main (){
    // txt
    HAMED
    solve();
    return 0;
}