#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;






using namespace std;
const int N=1e5+5;

void solve(){

   int n,q;cin>>n>>q;
    int a[n+2]{};
    int b[n+2]{};
    int c[n+2]{};
    for (int i=1;i<=n;i++) {
        int x;cin>>x;
        if(x==1)a[i]=1;
        else if(x==2)b[i]=1;
        else c[i]=1;
        a[i]+=a[i-1];
        b[i]+=b[i-1];
        c[i]+=c[i-1];
        //cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<'\n';
    }
    while (q--) {
        int l,r;cin>>l>>r;
        cout<<a[r]-a[l-1]<<" "<<b[r]-b[l-1]<<" "<<c[r]-c[l-1]<<'\n';
    }


}

int main (){

      //txt
    freopen("bcount.in", "r", stdin), freopen("bcount.out", "w", stdout);
    HAMED
    solve();
    return 0;
}