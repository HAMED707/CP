#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=105;

void solve() {

    int n,q; cin>>n>>q;
    multiset<int>st;
    for (int i=0;i<n;i++) {
        int x;cin>>x;
        st.insert(x);
    }
    while (q--) {
        int o,x;cin>>o;
        if(o==0)cin>>x,st.insert(x);
        else if(o==1)cout<<*st.begin()<<'\n',st.erase(st.begin());
        else  cout<<*--st.end()<<'\n',st.erase(--st.end());
    }

}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}