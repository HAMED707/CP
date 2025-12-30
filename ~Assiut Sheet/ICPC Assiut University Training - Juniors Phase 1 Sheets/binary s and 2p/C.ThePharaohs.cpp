#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=1e5+5;


void solve(){
    int t;cin>>t;
    while (t--) {
        ll x;cin>>x;

        ll l=0,r=1e10+5,ans=0;
        while (l<=r) {
            ll m=l+(r-l)/2;
            if((m*(m+1)/2)>=x)r=m-1,ans=m;
            else l=m+1;
        }
        cout<<ans<<endl;
    }
}

int main (){
    //txt
    HAMED
    solve();
    return 0;
}