#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;



void solve(){
    int n,q;cin>>n>>q;
    int a[n];for(auto&i:a)cin>>i;

    while (q--) {
        int x;cin>>x;
        bool ans=0;

        int l=0,r=n-1;

        while (l<=r) {
            int m=(l+r)/2;
            if(a[m]==x){ans=1;break;}
            if(a[m]<x)l=m+1;
            else r=m-1;
        }
        if(ans)cout<<"YES\n";
        else cout<<"NO\n";
    }
}


int main (){

   // txt
    HAMED
    solve();
    return 0;
}