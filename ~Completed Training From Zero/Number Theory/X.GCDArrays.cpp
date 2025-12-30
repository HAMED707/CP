#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=1e9+5;

void solve(){
    int t;cin>>t;
    while (t--) {
        int l,r,k;cin>>l>>r>>k;
            if(l==r and l!=1)cout<<"YES\n";
            else if(l==r and l==1)cout<<"NO\n";
            else if((r - l + 1) - (r / 2 - (l - 1) / 2) <= k) cout << "YES\n";
            else cout<<"NO\n";
    }

}

int main (){
    //txt
    HAMED
    solve();
    return 0;
}