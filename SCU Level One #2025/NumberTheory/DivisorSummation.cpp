#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;
const int N=1e8;



void solve() {
    ll n;
    cin >> n;
   if (n==0 || n==1)return void(cout<<0<<'\n');
    ll sum = 0;

    for (ll i = 1; i  <= n/i; ++i) {
        if (n % i == 0) {
            sum += i;
            if (n / i != i && n / i != n) {
                sum += n / i;
            }
        }
    }

    cout << sum << endl;
}



int main (){

    // txt
    HAMED
    int t;cin>>t;
    while (t--)
        solve();
    return 0;
}