#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;

        int count_s = 0, count_t = 0;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') count_s++;
            if (t[i] == '1') count_t++;
        }

        if (count_s == count_t) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
