#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


using namespace std;
const int N=1e5+5;
    int n,x[N],v[N],dp[N][2];


int rec(int i=1,int isr=0) {
    if(i>=n-1)return 0;

    int&ret=dp[i][isr];
    if(~ret)return ret;
    ret=0;
    if(x[i]-v[i]>x[i-1]+isr*v[i-1])
        ret=max(ret,1+rec(i+1,0));
    if(x[i]+v[i]<x[i+1])
        ret=max(ret,1+rec(i+1,1));

    return max(ret,rec(i+1,0));

}
void solve(){

    cin>>n;
    memset(dp,-1,sizeof dp);
    if(n<3)return void(cout<<n);
    for (int i=0;i<n;i++)cin>>x[i]>>v[i];


    cout<<rec()+2;
}

int main (){

    // txt
    HAMED
    solve();
    return 0;
}