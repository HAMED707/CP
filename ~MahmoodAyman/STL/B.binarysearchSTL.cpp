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
    int n,q;cin>>n>>q;
    vector<int> v(n);
    for(auto& i:v)cin>>i;
    sort(all(v));
    while (q--) {
        string s;cin>>s;
        int x;cin>>x;
        if(s=="binary_search") {
            cout<<(binary_search(all(v),x)?"found\n":"not found\n");
        }else if(s=="upper_bound") {
            auto ans=upper_bound(all(v),x);
          cout<< (ans!=v.end()?*ans:-1)<<'\n';
        }
        else {
            auto ans=lower_bound(all(v),x);
            cout<< (ans!=v.end()?*ans:-1)<<'\n';
        }
    }


}

int main (){

    txt
    HAMED
    solve();
    return 0;
}