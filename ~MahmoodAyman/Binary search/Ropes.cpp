 #include <bits/stdc++.h>
#define ll long long
#define ld long double

using namespace std;
ll n,k, s[10005];
bool can(ld mid) {
    ll sum=0;
    for (int i=0;i<n;i++) {
        sum+=floor(s[i]/mid);
    }
    //cout<<"sum::"<<sum<<'\n';
    return sum>=k;
}
int main() {
    cin>>n>>k;
    for (int i=0;i<n;i++)cin>>s[i];
    ld l=0,r=1e7,ans=0;
    int it=300;
    while (it-- and l<=r) {
        ld mid=(l+r)/2;
        if(can(mid)) {
            ans=mid;
            l=mid;
        }else r=mid;

            cout<<"mid::"<<mid<<" ";
        cout<<"L::"<<l<<"  "<<"R::"<<r<<'\n';
    }
    cout<<fixed<<setprecision(1)<<ans;

}