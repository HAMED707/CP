#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);


#define ll long long
#define ld long double

 using namespace std;
const int N=1e5+5;

void solve(){
    int n;cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];

    ll sum = 0, mx = INT_MIN;
    int l=0;

    for (int r = 0; r < n; r++) {
        sum += a[r];

        mx = max(mx, sum);

        if (sum < 0) {
            sum = 0;
            l=r+1;
        }
    }

    cout << mx << endl;

}

int main (){

    //txt
    HAMED
    solve();
    return 0;
}