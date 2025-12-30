#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>


using namespace std;
const int N=1e5+5;
int freq[N];

void solve(){
    int n,k;cin>>n>>k;
    int a[n+1];
    for (int i=1;i<=n;i++) cin>>a[i];

    int suf[n+2]{};

    for (int i=n;i>=1;i--) {
       int x=a[i];
        if(freq[x]==0) {
            suf[i]++;
            freq[x]++;
        }else freq[x]++;
        suf[i]+=suf[i+1];
    }
    while (k--) {
        int x;cin>>x;
        cout<<suf[x]<<'\n';

    }
}

int main () {
    //txt
    HAMED
    solve();
    return 0;
}
