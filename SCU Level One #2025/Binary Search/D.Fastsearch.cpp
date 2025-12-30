#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;



void solve(){
    int n,q;cin>>n;
    int a[n];for(auto&i:a)cin>>i;
    sort(a,a+n);
    cin>>q;
    while (q--) {
        int l,r;cin>>l>>r;
        auto lo=lower_bound(a,a+n,l)-a;
        auto up=upper_bound(a,a+n,r)-a;
        cout<<up-lo<<' ';

        // int l=0,r=n-1;
        // while (l<=r) {
        //     int m=(l+r)/2;
        //     //if(a[m]==x){ans=1;break;}
        //     if(a[m]<x)l=m+1;
        //     else r=m-1,ans=m+1 ;
        // }
        // if(ans==0)cout<<n+1<<'\n';
        // else cout<<ans<<'\n';
    }
}


int main (){

    //txt
    HAMED
    solve();
    return 0;
}