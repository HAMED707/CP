
#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;
const int N=1e5+5;

    ll freq[N],dp[N];
void solve(){
    int n;cin>>n;int max_val = 0;
    for (int i=0;i<n;i++) {
        int x;cin>>x;
        freq[x]++;
        max_val = max(max_val, x);

    }
    dp[1] = freq[1];
    for (int i=2;i<=max_val;i++) {
        dp[i]=max(dp[i-1],dp[i-2]+i*freq[i]);
    }

    cout<<dp[max_val];
}

int main (){

   // txt
    HAMED
    solve();
    return 0;
}