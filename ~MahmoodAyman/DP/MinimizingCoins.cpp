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
    int n,sum;
    cin>>n>>sum;
    int s[n];for(auto&i:s)cin>>i;

    vector<int>dp(sum+1,INT_MAX-1);
    dp[0]=0;

    for (int i=1;i<=sum;i++) {

        for(auto&v:s) {
            if(i-v>=0) {
                dp[i]=min(dp[i],dp[i-v]+1);
            }
        }

    }
    if(dp[sum]==INT_MAX-1)dp[sum]=-1;
    cout<<dp[sum];
}

int main (){
   //   txt
    HAMED
    solve();
    return 0;
}