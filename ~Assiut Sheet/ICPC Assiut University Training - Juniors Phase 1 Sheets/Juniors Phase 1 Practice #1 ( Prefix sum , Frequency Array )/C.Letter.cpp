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
char freq[N];
void solve(){
    string s,t;getline(cin,s);getline(cin,t);

    //transform(all(s),s.begin(),::tolower);
    //transform(all(t),t.begin(),::tolower);
    for (auto& c:s) {
        if(c==' ')continue;
        freq[c]++;
    }
    for (auto& c:t) {
        if(c==' ')continue;
        if(!freq[c])return void(cout<<"NO");
        freq[c]--;
    }cout<<"YES";
}

int main () {
  // txt
    HAMED
    solve();
    return 0;
}
