#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=1e5+5;
    int n,k;
    vector<int>have(N),must(N);

bool good(ll m) {
    ll need=k;
    for (int i=0;i<n;i++) {

        for (int i = 0; i < n; i++) {
            need -= max(0LL, m * must[i] - have[i]);
            if (need < 0) return false;
        }
        return true;
    }
}

void solve(){
    cin>>n>>k;

    for (int i=0;i<n;i++)cin>>must[i];
    for (int i=0;i<n;i++)cin>>have[i];

    int l=0,r=2e9,ans=0;

    while (l<=r) {
        ll m=l+(r-l)/2;
        if(good(m))ans=m,l=m+1;
        else r=m-1;
    }
    cout<<ans;


}

int main (){

     //txt
    HAMED
    solve();
    return 0;
}