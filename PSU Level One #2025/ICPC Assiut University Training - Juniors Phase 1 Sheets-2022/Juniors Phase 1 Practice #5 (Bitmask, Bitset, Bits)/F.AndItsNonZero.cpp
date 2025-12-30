#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()



using namespace std;
vector<vector<int>>pre(2e5+1,vector<int>(32));



void solve(){

    int l,r,mx=0;cin>>l>>r;
    for (int i=0;i<32;i++) {
        mx=max(mx,pre[r][i]-pre[l-1][i]);
    }
    cout<<(r-l+1)-mx<<'\n';
}

int main (){

     //txt
    HAMED
    for (int i=1;i<=2e5;i++) {
        for (int bit=0;bit<32;bit++) {
            pre[i][bit]+=pre[i-1][bit]+ ((i &(1<<bit))!=0);
        }
    }
    int t;cin>>t;
    while (t--)solve();
    return 0;
}