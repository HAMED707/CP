#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=1e5+5;
   int n,kmax;
vector<ll> can(int a[],int m) {
    vector<ll> cost(n);
    for (int i=0;i<n;i++) {
        cost[i]=a[i]+(ll)(i+1)*m;
    }
    sort(cost.begin(),cost.end());
    return cost;
}

void solve(){
    cin>>n>>kmax;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    pair<int,ll>ans={0,0};

    int l=0,r=n;
    while (l<=r) {
        int m=l+(r-l)/2;
        vector<ll>v=can(a,m);
        ll cost=0;
        for(int i=0;i<m;i++) {
            cost+=v[i];
        }
        if(cost<=kmax) {
            ans={m,cost};
            l=m+1;
        }else r=m-1;
    }
    cout<<ans.first<<" "<<ans.second;

}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}