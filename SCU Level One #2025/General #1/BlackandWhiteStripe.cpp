#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;


void solve(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int p[n+1]{};
    int mn=INT_MAX;
    for (int i=1;i<=n;i++) {
        p[i]+=p[i-1]+(s[i-1]=='W');
        //cout<<p[i]<<" ";
    }
    for (int i=k;i<=n;i++) {
        mn=min(mn,p[i]-p[i-k]);
    }cout<<mn<<'\n';

}


int main (){

    txt
    HAMED
    int t;cin>>t;
    while (t--)solve();
    return 0;
}