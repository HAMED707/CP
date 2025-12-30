#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
using namespace std;
const int N=105;

void solve(){
    int n,q;cin>>n;
    int a[n]{};
    for(int i=1;i<=n;i++) {
        cin>>a[i];
        a[i]+=a[i-1];
        //cout<<a[i]<<" ";
    }
    cin>>q;
    while (q--) {
        int l,r;cin>>l>>r;
        cout<<a[r+1]-a[l+1-1]<<"\n";
    }
}

int main (){

    txt
    HAMED
    solve();
    return 0;
}