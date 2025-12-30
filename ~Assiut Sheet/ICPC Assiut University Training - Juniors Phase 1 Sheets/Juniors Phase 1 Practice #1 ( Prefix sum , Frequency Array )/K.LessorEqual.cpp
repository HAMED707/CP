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
const int N=2e6+5;
ll freq[N];
void solve() {
    int n,k;cin>>n>>k;

    int a[n+2]{};

    for (int i=1;i<=n;i++)
    {cin>>a[i];}

    sort(a,a+n+1);
    int c=0,ans=-1;

    for (int i=a[k];i<=a[k]+1;i++) {
        c=0;
        for (int j=1;j<=n;j++) {
            if(i>=a[j])c++;

        }
        if(c==k&&i>0&&i<=1e9) {
            ans=i;
            break;
        }
    }
    cout<<ans;
}

int main (){

   txt
    HAMED
    solve();
    return 0;
}