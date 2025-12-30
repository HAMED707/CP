#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;

bool can(int m) {

}
void solve(){
    int n;cin>>n;
    int a[n];
    int o=0;
    for(auto&i:a)cin>>i,o|=i;

    int l=0,r=3e5,ans=0;
    while (l<=r) {
        int m=l+(r-l)/2;

        if(can(m))r=m-1,ans=m;
        else l=m+1;
    }
    cout<<ans;

}

int main (){

    txt
    HAMED
    solve();
    return 0;
}