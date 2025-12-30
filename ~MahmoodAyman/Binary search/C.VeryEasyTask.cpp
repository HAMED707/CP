
#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,x,y;
bool good(ll m) {
    // ll s=min(x,y);
    // m-=s;
    // if(0>m)return 0;
    //s=((m/x)+(m/y))+1;
    return ((m/x)+(m/y))>=n;
}
int main() {
cin>>n>>x>>y;
    n--;
    ll l=1,r=n*min(x,y),ans=0;
    while (l<=r) {
        ll mid=l+(r-l)/2;
        if(good(mid))r=mid-1,ans=mid;
        else l=mid+1;
    }
    cout<<ans+min(x,y)<<" ";

    return 0;
}
