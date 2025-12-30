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
const int N=1e9+5;
void solve(){

   int n;cin>>n;
map<int,int> mp;

    while (n--) {
        int l,r;
        cin>>l>>r;
        mp[l]=1;
        mp[r]=-1;
    }

    ll mx=0,x=0;
    for(auto& [v,y]:mp){
        x+=y;
        mx=max(x,mx);
    }
    cout<<mx;

}

int main (){
    //txt
    HAMED
    solve();
    return 0;
}