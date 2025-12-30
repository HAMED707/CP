#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define ll long long
#define pl pair<ll, ll>
#define vi vector<ll>
#define vp vector<pl>
#define dl << "\n"
using namespace std;

const int N = 1e5 + 5;
int n;
vector<pair<int, int>> v;

int gcd(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int rec(int l, int r) {
    if (r - l + 1 < 3) return 0;

    int max_operations = 0;

    for (int a = l; a <= r; a++) {
        for (int b = a + 1; b <= r; b++) {
            for (int c = b + 1; c <= r; c++) {
                if (gcd(a, b) == 1 && gcd(b, c) == 1 && gcd(a, c) == 1) {
                    int operations_after_removal = 1 + rec(l, a - 1) + rec(a + 1, b - 1) + rec(b + 1, c - 1) + rec(c + 1, r);
                    max_operations = max(max_operations, operations_after_removal);
                }
            }
        }
    }

    return max_operations;
}

void solve() {
    cin >> n;
    v.resize(n);
    for (auto& [x, y] : v) {
        cin >> x >> y;
    }

    for (int i = 0; i < n; i++) {
        cout << rec(v[i].first, v[i].second) dl;
    }
}

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);
    HAMED
    solve();
    return 0;
}
