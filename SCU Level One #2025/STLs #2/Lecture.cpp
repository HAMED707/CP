#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;

void solve(){
    int n,m;cin>>n>>m;
    set<string>st;
    map<string,string>mp;
        while (m--) {
            string a,b;cin>>a>>b;
            mp[a]=b;
        }
    while (n--) {
        string x;cin>>x;
        if(mp[x].size()<x.size())cout<<mp[x]<<' ';
        else cout<<x<<' ';
    }

}

int main (){
   // txt
    HAMED
    solve();
    return 0;
}