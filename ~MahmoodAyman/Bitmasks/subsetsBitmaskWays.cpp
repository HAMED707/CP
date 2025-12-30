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

bool know(int i,ll n) {
    return (n>>i)&1;
}
ll To1(int i,ll n) {
    return n|(1<<i);
}
ll To0(int i,ll n) {
    return n&(-1^(1<<i));
}
ll To1_0(int i,ll n) {
    return n^(1<<i);
}

vector<vector<int>>ans;int s[20], n;
//
// void a(int i=0) {
//     if(i==n){ans.push_back(v);return;}
//     v.push_back(s[i]);
//     a(i+1);
//     v.pop_back();
//     a(i+1);
// }

void solve(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>s[i];

    for(int mask=0;mask<(1<<n);mask++) {
        vector<int>v;
        for (int i=0;i<n;i++) {
            cout<<"bitmask ::"<<mask<<'\n';
            if(know(i,mask)==1){v.push_back(s[i]);cout<<s[i]<<'\n';}

        }
        cout<<"end---\n";
        ans.push_back(v);
    }
    sort(all(ans));
    //
    // for (auto i:ans) {
    //     for (auto c:i) {
    //         cout<<c<<' ';
    //     }cout<<'\n';
    // }
}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}