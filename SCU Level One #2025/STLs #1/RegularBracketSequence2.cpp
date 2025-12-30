#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;
bool vis[101]{};
    void solve() {
        string s;cin>>s;

        if(s.size()%2==0 and s[0]!=')' and s[s.size()-1]!='(')cout<<"YES\n";
        else cout<<"NO\n";
    }

int main (){

    //txt
    HAMED
    int n;cin>>n;
    while (n--) {

        solve();
    }
    return 0;
}