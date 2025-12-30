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

    vector<int>dp(sum+1,0);
    dp[0]=1;

        for(auto&v:s) {
        for (int i=1;i<=sum;i++) {

            if(i-v>=0) {
                dp[i]+=dp[i-v];
                if(dp[i]>=1e9+7)dp[i]-=1e9+7;
            // cout<<dp[i]<<' ';
            }
        }
            // cout<<'\n';
    }

    cout<<dp[sum];
}

int main (){
    // txt
   HAMED
   solve();
    return 0;
}