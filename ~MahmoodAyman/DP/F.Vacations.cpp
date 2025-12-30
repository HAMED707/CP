#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



 using namespace std;
const int N=1e2+5;
const int inf=-2e8;


int n,dp[N][N],a[N];
int rec(int i=0,int nx=0) {
    if(i==n)return 0;
    int&ret=dp[i][nx];
    if(~ret)return ret;
    ret = max({rec(i + 1, 3),rec(i + 1, 1),rec(i + 1, 2)});
    if(a[i]!=0)
        ret=max(ret,rec(i+1,1)+(a[i]!=2 and nx!=1))
       ,ret=max(ret,rec(i+1,2)+(a[i]!=1 and nx!=2));

    return ret;
}

void solve(){
    cin>>n;
    memset(dp,-1,sizeof dp);
    for (int i=0;i<n;i++)cin>>a[i];
    cout<<n-rec();
}

int main (){
   //    txt
    HAMED
    solve();
    return 0;
}