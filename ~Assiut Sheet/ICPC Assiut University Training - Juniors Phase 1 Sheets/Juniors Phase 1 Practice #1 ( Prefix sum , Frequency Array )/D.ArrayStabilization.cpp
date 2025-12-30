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

void solve(){
    int n;cin>>n;
    //if(n<=2)return void(cout<<0);
    vector<int> a(n);
    for (auto& i:a)cin>>i;
    sort(all(a));
    n--;
    //cout<<a[n]-a[1]<<" "<<a[n-1]-a[0];
    cout<<min(a[n-1]-a[0],a[n]-a[1]);
}

int main (){

   //  txt
    HAMED
    solve();
    return 0;
}