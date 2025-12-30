#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;
const int N=2e5+5;
    int sz,a[N],dp[N];


int rec(int i) {

    if(i==sz)return 0;

    if(dp[i]!=-1)return dp[i];
    int leave=rec(i+1)+1;
    int take=1e9;
    if(i+a[i]+1<=sz)take=rec(i+a[i]+1);
    return dp[i]=min(take,leave);

}

void solve(){
    cin>>sz;
    for (int i=0;i<;i++)dp[i]=1e9;
    for (int i=0;i<sz;i++)cin>>a[i],dp[i]=-1;

    cout<<rec(1)<<'\n';
}

int main (){

     //txt
    HAMED int n;cin>>n;
    while (n--)solve();
    return 0;
}