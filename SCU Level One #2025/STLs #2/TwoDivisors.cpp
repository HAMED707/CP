#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;
int nextMulti(int l,int d,int a) {
    return l*(d/a);
}

void solve(){
    int n;cin>>n;
    while (n--) {
        int l,r;cin>>l>>r;
        int lc=lcm(l,r);
        if(lc==r)cout<<nextMulti(lc,r,l)<<'\n';
        else cout<<lc<<"\n";
       // cout<<lc<<'\n';

    }
}

int main (){
    //txt
    HAMED
    solve();
    return 0;
}