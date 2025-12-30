#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=2e5+5;


int n,k,s;
vector<int>vis;
bool ok() {
   int i=1;
    int cel=0,group=0;
        while (i<=n) {
            if(vis[i])cel=0;
            else cel++;
            if(cel==s)group++,cel=0,i++;
            i++;
        }
    return group<k;
}
void solve(){
    cin>>n>>k>>s;
    int x;cin>>x;
    int a[x];for (auto&i:a)cin>>i;

    vis.resize(n+1,0    );

    int l=0,r=x-1,ans=-1;
    while (l<=r) {
        int m=l+(r-l)/2;
        fill(vis.begin(), vis.end(), 0);
        for(int i=0;i<=m;i++) {
            vis[a[i]]=1;
        }
        if(ok())r=m-1,ans=m+1;
        else l=m+1;
    }cout<<ans;

}


int main (){

   // txt
    HAMED
    solve();
    return 0;
}