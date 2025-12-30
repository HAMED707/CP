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
   vector<int>dp(n+1,INT_MAX-1);
    dp[n]=0;
    for (int i=n;i>0;i--) {
        if(dp[i]==INT_MAX-1)continue;
        int x=i;
        while (x) {
            int dig=x%10;
            x/=10;

            if(i-dig>=0)dp[i-dig]=min(dp[i-dig],dp[i]+1);
        }
    }cout<<dp[0];
}

int main (){
    // txt
    HAMED
    solve();
    return 0;
}