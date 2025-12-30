#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


using namespace std;
const int N=1e3+5;
    int n,m,l,r,a[1005];
    int dp[N][N][3];

int rec(int i=0,int wid=0,int last=2) {
    if(i==m) {
        if(wid<l || wid>r)return 1e9;
        return 0;
    }
    int&ret=dp[i][wid][last];
    if(~ret)return ret;

    int dot=1e9;
    if(i==0 or (last==0 and wid+1<=r) or (last==1 and wid>=l))
        dot=rec(i+1,!last?wid+1:1,0)+n-a[i];

    int hash=1e9;
    if(i==0 or (last==1 and wid+1<=r) or (last==0 and wid>=l))
        hash=rec(i+1,last?wid+1:1,1)+a[i];

    ret=min(dot,hash);

    return ret;
}

void solve(){
    cin>>n>>m>>l>>r;
    memset(dp,-1,sizeof dp);
    char v[n][m];
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)cin>>v[i][j];


    for (int j=0;j<m;j++) {
        for (int i=0;i<n;i++) {
            if(v[i][j]=='.')a[j]++;
        }
        //cout<<a[j]<<' ';
    }

    cout<<rec();
}

int main (){

  //  txt
    HAMED
    solve();
    return 0;
}