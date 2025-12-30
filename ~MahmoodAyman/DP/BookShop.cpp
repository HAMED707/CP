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
    int n,x;cin>>n>>x;
    int dp[100005]{},p[n],b[n];
    for(auto&i:p)cin>>i;
    for(auto&i:b)cin>>i;

    for (int i=0;i<n;i++) {

        for (int price=x;price>=1;price--) {

            if(p[i]<=price) {
                dp[price]=max(dp[price],dp[price-p[i]]+b[i]);
            }
           // cout<<price<<' '<<dp[price]<<'\n';
        }
    }cout<<dp[x];
}

int main (){
    // txt
    HAMED
    solve();
    return 0;
}