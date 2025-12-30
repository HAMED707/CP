#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=1e5+5;

void solve(){

    ll n;int k;cin>>n>>k;
    vector<ll>v;

    for (ll i=1;i<=n/i  ;i++) {
        if(n%i==0) {
            v.push_back(i);
            if(n/i!=i)v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    cout<<(v.size()<k?-1:v[k-1]);
}

int main (){
   // txt
    HAMED
    solve();
    return 0;
}