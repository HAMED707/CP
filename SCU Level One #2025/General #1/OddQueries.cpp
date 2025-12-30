#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;


void solve() {
    int n,q;cin>>n>>q;
    ll a[n+2]{},p[n+2]{},s[n+2]{};

    for (int i=1;i<=n;i++) {
        cin>>a[i];
        p[i]=p[i-1]+a[i];
        //cout<<p[i]<<" ";
    }//cout<<'\n';
    for (int i=n;i>=1;i--) {
        s[i]=s[i+1]+a[i];
        //cout<<s[i]<<" ";
    }
    while (q--) {
        int l,r,x;cin>>l>>r>>x;
        ll sum=(r-l+1)*x+(p[l-1]-p[0])+(s[r+1]-s[0]);
        cout<<(sum%2!=0?"YES":"NO")<<'\n';

    }

}


int main (){

    //txt
    HAMED
    int t;cin>>t;
    while (t--)solve();
    return 0;
}