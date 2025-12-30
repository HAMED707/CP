    #include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;


int n,k;
vector<pair<int,int>>a;
bool ok(ll m) {
    int r=1;
    int res=1,tmp=a[0];

    for (;r<n;r++) {
        if(a[r]-tmp>=m)res++,tmp=a[r];
    }
    return res>=k;
}
void solve(){
    cin>>n>>k;
    a.resize(n);
    for(auto&[x,y]:n)cin>>x>>y;
    sort(all(a));
    ll l=0,r=a[n-1]-a[0]    ;
    ll ans=0;

    while (l<=r) {
        ll m=l+(r-l)/2;
        if(ok(m))l=m+1,ans=m;
        else r=m-1 ;
    }
    cout<<ans<< '\n';
}


int main (){
   txt
    HAMED
    solve();
    return 0;
}