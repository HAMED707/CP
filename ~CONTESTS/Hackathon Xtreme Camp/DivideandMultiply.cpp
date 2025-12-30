#include <bits/stdc++.h>
#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define ll long long
using namespace std;
ll power(int c ) {
    ll s=1;
    while (c--)s*=2;
    return s;
}

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<ll> a(n);
        int cnt = 0;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            while (a[i] % 2 == 0) {
                a[i] /= 2;
                cnt++;
            }
        }
        sort(a.begin(), a.end());
        a[n - 1] *= power(cnt);

        ll sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += a[i];
        }
        cout << sum << '\n';
    }
}

int main() {
    //txt
    HAMED
    solve();
    return 0;
}
