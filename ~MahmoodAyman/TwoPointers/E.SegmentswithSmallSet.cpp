#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=1e5+5;
int  freq[N];
int  cnt;

void add(int x) {
    freq[x]++;
    if(freq[x]==1)cnt++;
}

void remov(int x) {
    freq[x]--;
    if(!freq[x]) {
        cnt--;
    }
}

void solve(){

    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];

    ll ans=0 ;
    int l=0,r=0;

    while(r<n){
        add(a[r]);

        while (cnt>k) {
            remov(a[l++]);
        }
        ans+=r-l+1;
        r++;
    }
        cout<<ans;
}

int main (){

   // / txt
    HAMED
    solve();
    return 0;
}