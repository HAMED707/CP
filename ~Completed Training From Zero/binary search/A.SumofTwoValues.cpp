#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=2e5+5;
ll a[N];
void solve(){

    ll n,target;cin>>n>>target;
    for(int i=1;i<=n;i++)cin>>a[i];
    sort(a,a+n);
    ll l=1,r=n,ans=0;
    while (l<=r) {
        ll m=l+(r-l)/2;
        if(a[l]+a[r]==target){cout<<l<<" "<<r;return;}
        if(a[m]+a[r]<target)l=m+1;
        else r=m;
    }
    cout<<-1;;


}

int main (){

    txt
    HAMED
    solve();
    return 0;
}