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
    int a[n+3]{};
    int p[n+3]{};
    int s[n+3]{};
    for (int i=1;i<=n;i++) {
        cin>>a[i];
        p[i]+=p[i-1]+a[i];
       // cout<<p[i]<<" ";
    }//cout<<'\n';
    for (int i=n;i>=1;i--) {

        s[i]+=s[i+1]+a[i];
       // cout<<s[i]<<" ";
    }
    while (q--) {
        int l,r,k;cin>>l>>r>>k;

        int res=k*(r-l+1)+(p[l-1]-a[0])+(s[r+1]-s[n+1]);

        cout<<(res%2==0?"EVEN":"ODD")<<'\n';
    }
}


int main (){

    txt
    HAMED
    int n;cin>>n;
    while (n--)solve();
    return 0;
}