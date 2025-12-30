#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);

#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()

using namespace std;
const int N=2e5+5;
const int inf=-2e8;


int n;

vector<int>a;
vector<vector<int>>dp;

int rec(int i=0,int last=1) {
        if(i>=n)return 0;
        int&ret=dp[i][last];
        if(~ret)return ret;

    int turn=last*a[i]+rec(i+1,!last);
    if(i+1<n)turn=min(turn,(last*a[i]+last*a[i+1])+rec(i+2,!last));
    return ret=turn;
}

void solve(){

    cin>>n;
    dp.assign(n+5,vector<int>(2,-1));
    a.assign(n,0);
    for (int i=0;i<n;i++)cin>>a[i];

    cout<<rec()<<'\n';

}

int main (){
    //txt
    HAMED
    int t;cin>>t;
    while (t--)solve();
    return 0;
}