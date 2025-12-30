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

void solve(){
    ll q,n;
    cin>>q>>n;
    while (q--) {
        ll x;int s;cin>>x>>s;
        if(x==1)cout<<know(s,n)<<'\n';
        else if(x==2)n=To1(s,n),cout<<n<<'\n';
        else if(x==3)n=To0(s,n),cout<<n<<'\n';
        else n=To1_0(s,n),cout<<n<<'\n';;
       // cout<<n<<'\n';
    }
}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}