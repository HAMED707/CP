#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=2e5+5;

void solve(){
    int n,k;cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    ll sum = 0;
    int l=0,mx=0;
    for (int r=0;r<n;r++) {
        sum+=a[r];
        while (sum>k) {
            sum-=a[l++];
        }
        mx=max(mx,r-l+1);
    }
        cout<<mx;

}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}