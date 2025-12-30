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
ll freq[N];
void solve(){
    int n;cin>>n;
    int a[n];
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    ll mx=0;
    for (int i=0;i<n-1;i++) {
        for (int j=i+1;j<n;j++) {
            int x=a[i]+a[j];
            freq[x]++;
            mx=max(mx,freq[x]);
        }
    }
    cout<< mx;
}

int main (){

   // txt
    HAMED
    solve();
    return 0;
}