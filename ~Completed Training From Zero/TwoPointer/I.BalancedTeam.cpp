#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double
#define all(X) X.begin(),X.end()
 using namespace std;
const int N=2e5+5;

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(all(a));
    ll sum = 0;int mx=0;
    int l=0,r=0;

    while (r<n) {
        sum+=a[r];
        while ((a[r]-a[l])>5 and l<=r) {
            sum-=a[l++];
        }
        mx=max(mx,r-l+1);
        r++;
    }
    cout<<mx;
}

int main (){

   // txt
    HAMED
    solve();
    return 0;
}