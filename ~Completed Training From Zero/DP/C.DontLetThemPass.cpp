
#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;
const int N=1e3+5;

   int n,m;
int block[N],dp[N][N];
int rec(int i=0,int j=0) {
    if(j>=m)return 0;
    int&ret=dp[i][j];

    if(~ret)return ret;
    ret=INT_MAX;

    for (int d=0;d<n;d++) {
        if(j==0 or abs(i-d)<2) {
            ret=min(rec(d,j+1)+abs(block[j]-d),ret);
        }
    }return ret;
}
void solve(){
    cin>>n>>m;
    memset(dp,-1,sizeof dp);
    for(int i=0;i<n;i++)for(int j=0;j<m;j++) {
        int x;cin>>x;
        if(x==1)block[j]=i;
    }
    cout<<rec();
}

int main (){

   // txt
    HAMED
    solve();
    return 0;
}