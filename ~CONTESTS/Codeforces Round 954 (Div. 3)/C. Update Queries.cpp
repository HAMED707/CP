#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        vector<pair<int, char>> updates(m);
        
        for (int i = 0; i < m; ++i) {
            int idx;
            cin >> idx;
            updates[i].first = idx - 1;  // Convert to zero-based index
        }
        
        for (int i = 0; i < m; ++i) {
            char c;
            cin >> c;
            updates[i].second = c;
        }
        
        // Sort updates by index, and lexicographically by character for same index
        sort(updates.begin(), updates.end());

        // Apply updates
        for (const auto& [idx, c] : updates) {
            s[idx] = c;
        }

        // Output the updated string
        cout << s << '\n';
    }

    return 0;
}
