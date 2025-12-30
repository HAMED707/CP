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

void solve() {
    int n,q;cin>>n>>q;
    int a[n+2][n+2]{};

    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++) {
            char c;cin>>c;
            if(c=='*')a[i][j]=1;

            a[i][j]+=a[i][j-1]+a[i-1][j]-a[i-1][j-1];
            //cout<<a[i][j]<<" ";


        }//cout<<'\n';}

        while (q--) {
            int r,c,k,l;cin>>r>>c>>k>>l;
            int ans=(a[k][l]-a[k][c-1]-a[r-1][l]+a[r-1][c-1]);
            cout<<ans<<'\n';
        }

    }


int main (){

   // txt
    HAMED
    solve();
    return 0;
}