#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;
const int N=1e5+5;




void solve(){
    ll n; cin >> n;
    ll cnt = 0;
    for (ll i = 1; ; ++i) {
        if (n % i == 0) {
            cnt++;
            cout<<i<<" ";
        }
        else break;
    }
    cout <<'\n'<< cnt << '\n';
}


int main (){

    txt
    HAMED
    int t;cin>>t;
    while (t--)solve();
    return 0;
}