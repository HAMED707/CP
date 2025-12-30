#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



 using namespace std;
const int N=1e5+5;
const int inf=-2e8;


  int n,cap;int w[105],val[105];
vector<vector<ll>>dp(105,vector<ll>(N,-1));
ll rec(int i,int cap) {
    if(i==n)return 0;
    if(dp[i][cap]!=-1)return dp[i][cap];
    ll leave= rec(i+1,cap);
    ll take= 0;
    if(cap>=w[i])take=rec(i+1,cap-w[i])+val[i];
    return dp[i][cap]=max(take,leave);
}

void solve(){
    cin>>n>>cap;
     for (int i=0;i<n;i++)cin>>w[i]>>val[i];

   cout<<rec(0,cap);


    // ll dp[N]{};
    // for (int i=0;i<n;i++) {
    //
    //     for (int j=cap;j>=0;j--) {
    //         if(w[i]<=j) {
    //             dp[j]=max(dp[j],dp[j-w[i]]+val[i]);
    //         }
    //     }
    // }cout<<dp[cap];



}

int main (){
   //txt
    HAMED
    solve();
    return 0;
}