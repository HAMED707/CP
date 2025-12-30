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
   vector<int>a(n);
    for (auto& i:a)cin>>i;

    vector<int>b;
    b=a;
    sort(all(b));

    ll ans=0;
    for(int i=n-1;i>=n-k;i--) {

        freq[b[i]]++;
        ans+=b[i];
    }
        cout<<ans<<'\n';
        int cnt=0;
    for (int i=0;i<n;i++) {
            cnt++;
        if(freq[a[i]]) {
            if(k==1) {
                cout<<cnt+n-i-1<<' ';
                break;
            }else {
                cout<<cnt<<' ';
                cnt=0;
                freq[a[i]]--;
                k--;
            }
        }
    }



}

int main () {
  // txt
  HAMED
  solve();
    return 0;
}
