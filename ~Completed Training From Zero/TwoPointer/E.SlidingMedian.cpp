#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=2e5+5;

void solve(){
    int n,k;cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    ll sum = 0;
    ll l=0,r=0;

    while (r-l+1<k) {
        sum+=a[r++];
    }
    int mx=0,mn=0;
    for (; r < n; r++) {
        sum+=a[r];
        //cout<<l<<"  "<<r<<'\n';
        int v=l,w=r,ans=0,tmp=sum;

        while (v<w) {
            // int t=tmp-a[v]-a[w];
            int res=-max(a[v],a[w])-min(a[v],a[w]);
            mx=max({a[v],a[w],res});
            mn=min({a[v],a[w],res});
            if(res==0)ans=res-a[w-1];
            ans=
            v++,w--;
        }
            cout<<sum-mx-mn<<" ";


        sum-=a[l++];

    }
}

int main (){

    //  txt
    HAMED
    solve();
    return 0;
}