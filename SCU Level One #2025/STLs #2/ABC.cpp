#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;

    void solve(){
        int n=3;
        vector<vector<ll>>v;
        while (n--) {
            int s;cin>>s;
            vector<ll>t(s);
            for (auto& i:t)cin>>i;
            v.push_back(t);
        }

        set<int>st;

        for (int j=0;j<v[0].size() ;j++)
            for (int k=0;k<v[1].size() ;k++)
                for (int l=0;l<v[2].size(); l++) {
                    ll sum=0;
                    sum =v[0][j]+v[1][k]+v[2][l];
                    st.insert(sum);
                }

        int q;cin>>q;
        for (int i=0;i<q;i++) {
            int x;cin>>x;

            if(st.find(x)!=st.end())cout<<"Yes\n";
            else cout<<"No\n";
        }
    }

int main (){
      //txt
    HAMED
    solve();
    return 0;
}