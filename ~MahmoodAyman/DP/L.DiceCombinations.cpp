#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



 using namespace std;
const int N=1e5+5;
const int inf=-2e8;
const int MOD = 1e9 + 7;
    ll n;vector<ll>dp(N,-1);

ll rec(ll num) {

    if (num == n) return 1;

    ll&ret=dp[num];
    if(~ret)return ret;
     ret=0;
    for (int i=1;i<=6;i++) {
       if(num+i<=n) ret += rec(num + i);
        ret%=MOD;
    }

    return ret;
}




void solve(){
    cin>>n;

    cout<<rec(0);
}

int main (){
    // txt
   HAMED
   solve();
    return 0;
}