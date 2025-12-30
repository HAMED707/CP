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
    int a[n];
    for(auto&i:a)cin>>i;

    ll l=0;
    ll sum=0,mn=LLONG_MAX;
    for (ll r=0;r<n;r++) {
        sum+=a[r];

        while (sum>=m ) {
             mn=min(mn,r-l+1);
            sum-=a[l++];
            //cout<<mn<<'\n';
        }
    }
    cout<<(mn==LLONG_MAX?-1:mn);
}


int main (){
    //  txt
    HAMED
    solve();
    return 0;
}