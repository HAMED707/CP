#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;


int n,k;
vector<ll>a;
bool ok(ld x) {
    ll sum=0;

    for (int i=0;i<n;i++) {
        sum+=(a[i]/x);
    }
    return sum>=k;
}
void solve(){
    cin>>n>>k;
    a.resize(n);
    for (int i=0;i<n;i++)cin>>a[i];
    ld l=0,r=1e7+5;
    ld ans=0;

   // while (!ok(r))r*=2;
    while (r - l > 1e-6) {
        ld m=l+(r-l)/2;
        if(ok(m))l=m,ans=m;
        else r=m ;
    }
    cout << fixed << setprecision(6) << ans << '\n';
}


int main (){

    //txt
    HAMED
    solve();
    return 0;
}