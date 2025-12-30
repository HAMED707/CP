#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;


void solve(){
    int x;cin>>x;
    int ans=0;
    while (x--) {
        int a;cin>>a;
        ans|=a;
    }cout<<ans<<'\n';
}

int main (){

    //txt
    HAMED
    int t;cin>>t;
    while (t--)solve();
    return 0;
}