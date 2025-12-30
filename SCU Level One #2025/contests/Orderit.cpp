#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=105;

void solve() {
    int n,q;cin>>n>>q;
    int a[n];
    for (int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    ll p[n+1]{};
    while (q--) {
        int l,r;cin>>l>>r;
        p[l-1]++;
        p[r]--;
    }
    for (int i=1;i<=n;i++)p[i]+=p[i-1];
    sort(p,p+n);
    ll s=0;
    for (int i=0;i<n;i++)s+=(a[i]*p[i]);
    cout<<s;
}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}