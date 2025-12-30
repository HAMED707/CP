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
    int s,e;
    cin>>s>>e;
    int dp[e+1]{};

    dp[s]=1;
    for (int i=s+1;i<=e;i++) {
        if(i-1>=s)dp[i]+=dp[i-1];
        if(i-2>=s)dp[i]+=dp[i-2];
        if(i-3>=s)dp[i]+=dp[i-3];
    }

    cout<<dp[e];
}

int main (){
   // txt
    HAMED
    solve();
    return 0;
}