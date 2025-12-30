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
    ll a[n+2]{};
    ll p[n+2]{};
    for (int i=1;i<=n;i++) {
        cin>>a[i];
        p[i]=a[i]+p[i-1];
        //  cout<<p[i]<<" ";
    }
    while (q--) {
        int l,r;cin>>l>>r;

        cout<<p[r]-p[l]<<'\n';
    }

}

int main (){

 //  txt
    HAMED
    solve();
    return 0;
}