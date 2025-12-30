#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=1e5+5;

void solve(){
    int n,m;cin>>n>>m;
    vector<ll> a(n);
    for (int i=0;i<n;i++)cin>>a[i];
    ll gc=0;
    for (int i=1;i<n;i++) {
        gc=gcd(gc,a[i]-a[0]);
    }
    while (m--) {
        ll x;cin>>x;
        cout<<gcd(gc,a[0]+x)<<" ";
    }


}

int main (){
    // txt
    HAMED
    solve();
    return 0;
}