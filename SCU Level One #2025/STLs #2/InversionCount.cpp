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
    int t;cin>>t;
    while (t--) {
        int n;cin>>n;

        vector<int>v;
        while (n--) {
            int x;cin>>x;
            v.push_back(x);
        }

        ordered_set st;

        n=v.size();
        int ans=0;
        for (int i=0;i<n;i++) {
             int c=st.order_of_key(v[i]);
            ans+=(st.size()-c);
            st.insert(v[i]);
        }

             cout<<ans<<"\n";

    }
}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}