#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=1e5+5;

void solve(){
    int n;cin>>n;
    vector<int>a(n+1);
    vector<int>p(n+1);
    for(int i=1;i<=n;i++) {
        cin>>a[i];
        p[i]+=p[i-1]+a[i];
    }

    //for(int i=1;i<=n;i++) {cout<<p[i]<<" ";}
    int sum = 0,ans=0;
    int l=1,r=1;
    for(int i=1;i<=n-1;i++) {
        for (int j=i+1;j<=n;j++) {
            if(((p[i]-p[j])%n+n)%n==0)ans++;
        }
    }

    cout<<ans;
}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}