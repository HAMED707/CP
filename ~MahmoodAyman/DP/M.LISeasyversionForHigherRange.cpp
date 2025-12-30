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
    int n;
    cin>>n;
    vector<int>dp(105,1);int ans=0;
    int s[n];for(int i=0;i<n;i++)cin>>s[i];
    for (int i=0;i<n;i++) {

        for (int j=0;j<i;j++) {
            if(s[j]>=s[i])continue;
            dp[i]=max(dp[i],dp[j]+1);
        }

        ans=max(ans,dp[i]);
    }

    cout<<ans;
}

int main (){
     // txt
    HAMED
    solve();
    return 0;
}