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

    ordered_set st;
    while (n--) {
        char s;cin>>s;int x;cin>>x;

        if(s=='I')st.insert(x);
        else if(s=='D'){if(st.find(x)!=st.end())st.erase(x);}
        else if(s=='K') {
            if(x>st.size())cout<<"invalid\n";
            else cout<<*st.find_by_order(x-1)<<'\n';
        }
        else  {
           cout<<st.order_of_key(x)<<'\n';
        }
    }
}

int main (){

     // txt
    HAMED
    solve();
    return 0;
}