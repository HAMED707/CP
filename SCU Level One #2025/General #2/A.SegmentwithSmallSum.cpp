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
    ll n,sz;cin>>n>>sz;
    int a[n];
    for (auto&i:a)cin>>i;
    ll l=0,sum=0,ans=INT_MAX;
    for (int r=0;r<n;r++) {
        sum+=a[r];
        while (sum>=sz ) {
        ans=min(ans,r-l+1);
            sum-=a[l++];
        }
    }
        cout<<(ans==INT_MAX?-1:ans);
}

int main (){
    //txt
    HAMED
    solve();
    return 0;
}