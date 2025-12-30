#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



 using namespace std;
const int N=2e3+5;
const int inf=-2e8;


int n,h,l,r,a[N];
int dp[N][N];
int rec(int i=0,int hours=0) {
    if(i==n)return 0;
    int x=(hours+a[i])%h;
    int y=(hours+a[i]-1)%h;
    int&ret=dp[i][hours];
    if(~ret)return ret;
    int x_=(x>=l and x<=r?1:0);
    int y_=(y>=l and y<=r?1:0);
    return ret=max(rec(i+1,x)+x_,
        rec(i+1,y)+y_);
}

void solve(){

cin>>n>>h>>l>>r;
    memset(dp,-1,sizeof dp);
for (int i=0;i<n;i++)cin>>a[i];

    cout<<rec();

}

int main (){
   // txt
    HAMED
    solve();
    return 0;
}