#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=5;
ll money;
int n,k;
int have[N],price[N],must[N];
bool good(ll m) {
    ll need=0;
    for(int i=0;i<3;i++) {
        if(must[i]*m>have[i]) {
            need+=(m*must[i]-have[i])*price[i];
        }
    }
    return need <= money;
}

void solve(){

    string s;cin>>s;
    for(int i=0;i<3;i++)cin>>have[i];
    for(int i=0;i<3;i++)cin>>price[i];

    cin>>money;

    for(int i=0;i<s.size();i++) {
        if(s[i]=='B')must[0]++;
        else if(s[i]=='S')must[1]++;
        else must[2]++;
    }

    ll l=0,r=1e14,ans=0;

    while (l<=r) {
        ll m=l+(r-l)/2;
        if(good(m))ans=m,l=m+1;
        else r=m-1;
    }
    cout<<ans;

}

int main (){

   // txt
    HAMED
    solve();
    return 0;
}