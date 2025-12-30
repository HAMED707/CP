#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;


    int w,h,n;
bool ok(ll x) {
    return ((x/h)*(x/w))>=n;
}
void solve(){
    cin>>w>>h>>n;
        ll l=0,r=1e9+1,ans=0;

   //while (!ok(r))r*=2;
        while (l<=r) {
            ll m=l+(r-l)/2;
            if(ok(m))r=m-1,ans=m;
            else l=m+1 ;
        }
    cout<<ans;
}


int main (){

    //txt
    HAMED
    solve();
    return 0;
}