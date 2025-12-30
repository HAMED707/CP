#include <bits/stdc++.h>

#define HAMED ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#define txt  freopen("input.txt","r",stdin); freopen("output.txt","w",stdout); freopen("error.txt","w",stderr);

#define ll long long
using namespace std;

const int N = 1e5 + 5;

void solve() {
    int test;
    cin >> test;

    while (test--) {
        int szz, q;
        cin >> szz >> q;
        string s;
        cin >> s;

        // Vector to store prefix sums for each character 'a' to 'z'
        vector<vector<int>> v(26, vector<int>(szz + 1, 0));
        map<char, int> mp;

        // Build prefix sum array for each character
        for (int i = 0; i < szz; i++) {
            for (int j = 0; j < 26; j++) {
                v[j][i + 1] = v[j][i] + (s[i] == j + 'a');
            }
            mp[s[i]]++;  // Count occurrences of each character in `s`
        }

        // Process each query
        while (q--) {
            ll l, r;
            char car;
            cin >> l >> r >> car;
            int caridx = car - 'a';
            int ans = 0;

            if (r <= szz) {
                // If both l and r are within the bounds of the first repetition of `s`
                ans = v[caridx][r] - v[caridx][l - 1];
            } else {
                // Calculate segments inside the first repetition
                ll full_repeats = (r - 1) / szz - (l - 1) / szz;
                int startIdx = (l - 1) % szz + 1;
                int endIdx = (r - 1) % szz + 1;

                if (startIdx <= endIdx) {
                    ans = v[caridx][endIdx] - v[caridx][startIdx - 1];
                } else {
                    ans = v[caridx][szz] - v[caridx][startIdx - 1] + v[caridx][endIdx];
                }

                // Add contribution from the full repetitions
                ans += full_repeats * mp[car];
            }

            cout << ans << endl;
        }
    }
}

int main() {
    HAMED
    solve();
    return 0;
}
