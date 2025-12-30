
#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
using namespace std;
const int N=1e5+5;
int freq[N];
void solve(){
        string s;cin>>s;
    s='a'+s;
        int p[s.size()]{};
    for(int i=1;i<=s.size();i++) {
        p[i]=(s[i]==s[i-1]);
        p[i]+=p[i-1];
    }

    int q;cin>>q;
    while (q--) {
        int l,r;cin>>l>>r;
        if(l==1)cout<<p[r]<<'\n';
        else cout<<p[r]-p[l]<<'\n';
    }



}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}