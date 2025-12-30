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
ll neg[N];
// void solve(){
//     int n,k;cin>>n>>k;
//     int a[n];
//     for (int i=0;i<n;i++) {
//         cin>>a[i];
//         if(a[i]>=0)freq[a[i]]++;
//         else neg[a[i]*-1]++;
//     }
//     ll ans=0;
//     for (int i=0;i<n;i++) {
//           ll c=-a[i]+k;
//         if(a[i]<0)neg[-a[i]]--;
//         else freq[a[i]]--;
//
//         if(c <0) ans+=neg[-c];
//         else ans+=freq[c];
//
//         if(a[i]<0)neg[-a[i]]++;
//         else freq[a[i]]++;
//
//     }
//     cout<< ans/2;
// }


ll freq2[2][N];

void solve(){
    int n,k;cin>>n>>k;
    int a[n];
    for (int i=0;i<n;i++) {
        cin>>a[i];
        freq2[1][a[i]]++;
    }
    ll ans=0;
    for (int i=0;i<n;i++) {
        freq2[1][a[i]]--;
        ans+=freq2[1][k-a[i]];
    }
    cout<< ans;
}


int main (){

  // txt
    HAMED
    solve();
    return 0;
}