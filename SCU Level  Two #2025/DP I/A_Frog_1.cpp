#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


using namespace std;
const int N=1e5+5;

void solve(){
    int n;cin>>n;
    int nums[n]{};for(auto&i:nums)cin>>i;

    vector<int> dp(n);
    dp[0]=nums[0];
    for(int i=0;i<n;i++) {
        if(i+1<n)dp[i+1]=(dp[i]+(abs(nums[i+1]-nums[i])));
        if(i+2<n)dp[i+2]=min(dp[i]+(abs(nums[i+2]-nums[i])),dp[i]   );
    }

    for(auto&i:dp)cout<<i<<' ';

    cout<< dp[n-1];
}

int main (){

    txt
    HAMED
    solve();
    return 0;
}