#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


using namespace std;
const int N=1e5+5;

void solve(){
    int n,w;cin>>n>>w;
    int weight[n],cost[n];
    for(int i=0;i<n;i++)
        cin>>weight[i]>>cost[i];

    vector<int>dp(w+1);

        for (int j=0;j<n;j++)
            for(int i=w;i>=weight[j];i--)
                dp[i]=max(dp[i-weight[j]]+cost[j],dp[i]);


    cout<<dp[w];
}

int main (){

    txt
    HAMED
    solve();
    return 0;
}