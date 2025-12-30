#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define HAMED ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);

void solve() {
    ll n;
    while (cin >> n && n != 0) {
        ll original = n;
        vector<ll> factors;

        if (n < 0) {
            factors.push_back(-1);
            n = -n;
        }

        while (n % 2 == 0) {
            factors.push_back(2);
            n /= 2;
        }

        for (ll i = 3; i * i <= n; i += 2) {
            while (n % i == 0) {
                factors.push_back(i);
                n /= i;
            }
        }

        if (n > 1) factors.push_back(n);

        cout << original << " =";
        for (size_t i = 0; i < factors.size(); ++i) {
            if (i) cout << " x";
            cout << " " << factors[i];
        }
        cout << "\n";
    }
}

int main() {
    // txt
    HAMED
    solve();
    return 0;
}
