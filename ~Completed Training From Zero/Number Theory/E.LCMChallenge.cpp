#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=1e5+5;

void solve() {
    ll n;cin>>n;
    if(n<3)cout<<n;
    else cout<<max({n*(n-1)*(n-2)/__gcd(n,n-2),
                       (n-1)*n*(n-3)/__gcd(n-1,n-3)/__gcd(n,n-3)
                       ,(n-1)*(n-2)*(n-3)/__gcd(n-1,n-3)});

}

int main (){
    //txt
    HAMED
    solve();
    return 0;
}