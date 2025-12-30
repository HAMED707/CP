#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Calculate prefix sums
        vector<long long> prefix_sum(n + 1, 0);
        for (int i = 1; i <= n; ++i) {
            prefix_sum[i] = prefix_sum[i - 1] + a[i - 1];
        }

        long long count = 0;

        for (int l = 0; l < n; ++l) {
            for (int r = l; r < n; ++r) {
                long long sum = prefix_sum[r + 1] - prefix_sum[l];
                if (sum > x) {
                    break;
                }
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
