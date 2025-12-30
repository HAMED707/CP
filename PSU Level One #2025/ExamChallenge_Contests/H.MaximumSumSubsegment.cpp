#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()


 using namespace std;
const int N=1e5+5;


void solve(){
    int n;cin>>n;
    int a[n+1]{};
    int p[n+1]{};

    for (int i=1;i<=n;i++) {
        cin>>a[i];
        p[i]+=a[i]+p[i-1];
        //cout<<p[i]<<" ";
    }
    int mx=INT_MIN;
    for (int i=n;i>=1;i--)
        for (int j=0;j<=n;j++) {
            int res=p[i]-p[j];
            mx=max(mx,res);
        }
    cout<<mx;
}


int main (){

   // txt
    HAMED
    solve();
    return 0;
}