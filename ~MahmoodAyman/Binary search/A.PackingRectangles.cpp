
#include <bits/stdc++.h>
#define ll long long
using namespace std;
   ll w,h,n;
bool good(ll x) {
    return (x/h)*(x/w)>=n;
}

int main() {
    cin>>w>>h>>n;

    ll l=0,r=1;
    while(!good(r))r*=2;
    cout<<r<<'\n';
    while (l+1<r) {
        ll mid=(l+r)/2;
        if(good(mid)) {
            r=mid;
            cout<<r<<'\n';
        }
        else l=mid;
    }

    cout<<r;
    return 0;
}
