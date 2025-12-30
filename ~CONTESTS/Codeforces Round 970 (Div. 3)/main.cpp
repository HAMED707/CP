#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        int sum = a + 2 * b;

        if (sum % 2 != 0) {
            cout << "NO" << endl;
            continue;
        }

        int target = sum / 2;

        // Check if we can form 'target' with available 1's and 2's
        if (target <= a + b && target >= 0 && target - a <= b) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
