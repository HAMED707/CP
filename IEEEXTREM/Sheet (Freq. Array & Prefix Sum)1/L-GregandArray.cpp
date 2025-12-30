
#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
using namespace std;
const ll N=1e5+5;
ll a[N],s[N],p[N];
void solve(){
   int n,m,k;cin>>n>>m>>k;
    vector<pair<int,int>>v(m+1);
    vector<ll>val(m+1,0);
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=m;i++) {
        int x,y,z;
        cin>>x>>y>>z;
        v[i]={x,y};
        val[i]=z;
    }
    while (k--) {
        int l,r;cin>>l>>r;
        p[l]++;
        p[r+1]--;
    }
    for(int i=1;i<=m;i++)p[i]+=p[i-1];

    for(int i=1;i<=m;i++)val[i]*=p[i];

    for(int i=1;i<=m;i++) {
        int x=v[i].first;
        int y=v[i].second;
        s[x]+=val[i];
        s[y+1]-=val[i];
    }

    for(int i=1;i<=n;i++)s[i]+=s[i-1];
    for(int i=1;i<=n;i++)cout<<s[i]+a[i]<<" ";

}

int main (){

    txt
    HAMED
    solve();
    return 0;
}