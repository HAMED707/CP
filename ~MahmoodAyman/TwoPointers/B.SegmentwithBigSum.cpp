#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
 using namespace std;
const int N=1e5+5;

void solve(){
    int n;ll k;cin>>n>>k;
    ll a[n],sum=0;
    for (int i=0;i<n;i++)cin>>a[i];
    int l=0,r=0,mn=INT_MAX;

    while (r<n){
        sum+=a[r];
        while (sum>=k) {
         mn=min(mn,r-l+1);
            sum-=a[l++];
        }
        r++;
    }

    cout<<(mn==INT_MAX?-1:mn);
}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}