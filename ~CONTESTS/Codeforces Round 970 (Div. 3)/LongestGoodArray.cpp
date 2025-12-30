#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long l, r;
        cin >> l >> r;

        long long d = r - l;
        if (d == 0) {
            cout << 1 << endl;
        } else {
            long long maxLength = (1 + sqrt(1 + 8 * d)) / 2;
            cout << maxLength  << endl;
        }
    }
    return 0;
}
