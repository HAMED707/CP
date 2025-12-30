
#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
using namespace std;
const int N=1e5+5;

void solve(){
    int n;cin>>n;
    ll ord[n+1]{},p[n+1]{};
    for(int i=1;i<=n;i++) {
        cin>>p[i];
        ord[i]=p[i];
        p[i]+=p[i-1];
    }
    sort(ord+1,ord+n+1);
    for(int i=1;i<=n;i++) {
        ord[i]+=ord[i-1];
        //cout<<un[i]<<" ";
    }
    int q;cin>>q;
    while (q--) {
        int o,l,r;cin>>o>>l>>r;
        if(o==2)cout<<ord[r]-ord[l-1]<<'\n';
        if(o==1)cout<<p[r]-p[l-1]<<'\n';
    }



}

int main (){

    txt
    HAMED
    solve();
    return 0;
}