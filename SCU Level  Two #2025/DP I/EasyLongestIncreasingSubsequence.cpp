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

    vector<int> dp(n,1);

    for(int i=1;i<n;i++)
        for(int j=0;j<i;j++)
            if(nums[i]>nums[j])
                dp[i]=max(dp[j]+1,dp[i]);

    cout<< *max_element(dp.begin(),dp.end());
}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}