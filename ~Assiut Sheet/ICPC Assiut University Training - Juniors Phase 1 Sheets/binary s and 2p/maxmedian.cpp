#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=2e5+5;
    int n,k;
    int a[N];
bool good(int m) {
    ll sum=0;
    for(int i=n/2;i<n;i++) {
        if(a[i]<m)sum+=m-a[i];
    }
    return sum<=k;
}

void solve(){

    cin>>n>>k;
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    int l=a[n/2],r=a[n/2]+k,ans=a[n/2];
    while (l<=r) {
        int m=l+(r-l)/2;
        if(good(m))ans=m,l=m+1;
        else r=m-1;
    }
    cout<<ans;


}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}