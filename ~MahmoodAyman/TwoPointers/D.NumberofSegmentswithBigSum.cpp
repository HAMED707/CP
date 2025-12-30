#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=1e5+5;

void solve(){
   ll n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];

    ll sum=0,ans=0 ;
    int l=0,r=0;



    while (r<n) {
        sum+=a[r];

        while (sum>=k) {
            ans += n-r ;
            sum-=a[l++];
        }
     r++;
    }


    cout<<ans;
}

int main (){

   txt
    HAMED
    solve();
    return 0;
}