#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



 using namespace std;
const int N=1e5+5;
const int inf=-2e8;


void solve(){
    int n;cin>>n;
    vector<bitset<10>>v(n);
    for (int i=0;i<n;i++) {
        string s;cin>>s;
        for (auto& c:s) {
            v[i][c-'0']=1;
        }
    }
    ll ans=0;

    for (int i=0;i<n-1;i++)for (int j=i+1;j<n;j++) {
        if((v[i] & v[j]).any())ans++;
    }

    cout<<ans<<'\n';

}

int main (){
    // txt
    HAMED
    int t;cin>>t;
    while (t--)solve();
    return 0;
}
