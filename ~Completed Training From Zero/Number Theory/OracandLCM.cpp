#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=1e5+5;

ll GCD(ll x,ll y) {
    while (y) {
        x%=y;
        swap(x,y);
    }
    return x;
}

ll LCM(ll x,ll y) {
ll g=GCD(x,y);
    if (x > LLONG_MAX / (y / g)) {
        return LLONG_MAX;
    }
    return x/g*y;
}

void solve(){
    int n;cin>>n;
    int a[n];
    for(auto& i:a)cin>>i;
    vector<ll>lc;
    for(int i=0;i<n-1;i++)
    for(int j=i+1;j<n;j++) {
        ll x=LCM(a[i],a[j]);
        lc.push_back(x);
    }
    ll gc=0;
    for(auto i:lc){
    gc=GCD(gc,i);
    }
    cout<<gc;
}

int main (){
    //txt
    HAMED
    solve();
    return 0;
}