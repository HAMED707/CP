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
const int N=1e6+5;
int vis[N];
void solve(){
    int n;cin>>n;
    int a[n];
    ll sum=0;
    for (auto& i:a)cin>>i,sum+=i,vis[i]++;
    ll cnt=0,idx=0;
    int ans[1000001];
    for (int i=0;i<n;i++) {
        ll t=(sum-a[i]);
        if( (t/2) <=1e6 &&t%2==0 and vis[t/2]>0 ) {
                if((vis[t/2]==1 and t/2==a[i]))continue;
            cnt++,ans[idx]=i+1,idx++;
        }
    }
    cout<< cnt<<'\n';
    for (int i=0;i<idx;i++) {
        cout<<ans[i]<<' ';
    }

}

int main (){

     //txt
    HAMED
    solve();
    return 0;
}